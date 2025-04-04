class ProductOfNumbers {
    vector<int>prefix;
public:
    ProductOfNumbers() {
        prefix={1};
    }
    
    void add(int num) {
        if(num==0)prefix={1};
        else prefix.push_back(prefix.back()*num);
    }
    
    int getProduct(int k) {
        if(k>=prefix.size())return 0;
        else return prefix.back()/prefix[prefix.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */