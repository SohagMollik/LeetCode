class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        if(purchaseAmount>=0 and purchaseAmount<5)return 100;
        else if(purchaseAmount>=5 and purchaseAmount<10)return 90;
        int x=(purchaseAmount/10);
        int a=x*10;
        int b=(x+1)*10;
        if(abs(purchaseAmount-a)==abs(purchaseAmount-b))return 100-b;
        else if (abs(purchaseAmount-a)>abs(purchaseAmount-b))return 100-b;
        else return 100-a;    
        
    }
};