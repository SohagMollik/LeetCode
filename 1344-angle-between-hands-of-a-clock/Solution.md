# Easy Solution Just one line Code | Simple Math | 100% Beats | 0ms | 

# Intuition
A clock has 360 degrees, where each hour mark represents 30 degrees. The hour hand also moves as minutes pass, so it moves 0.5 degrees per minute. The minute hand moves 6 degrees per minute.

Instead of simulating the clock hands' movement, we can directly calculate the angle between them using their positions. The difference between the two hand positions gives one possible angle, and the other possible angle is 360 - angle. We return the smaller one.

# Approach
1. Calculate the relative angle between the hour and minute hands:
    - Hour hand position = 30 * h + 0.5 * m
    - Minute hand position = 6 * m
    - Difference = abs(30 * h - 5.5 * m)
2. Since there can be two angles between the hands, choose the smaller angle:
    - min(angle, 360 - angle)
3. Return the result.

# Complexity
- Time complexity: O(1)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```cpp []
class Solution {
public:
    double angleClock(int h, int m) {
       return min(abs(30*h - 5.5*m), 360-abs(30*h - 5.5*m));
    }
};
```

```javascript []
var angleClock = function(h, m) {
    let angle = Math.abs(30 * h - 5.5 * m);
    return Math.min(angle, 360 - angle);
};
```
```python []
class Solution:
    def angleClock(self, h: int, m: int) -> float:
        angle = abs(30 * h - 5.5 * m)
        return min(angle, 360 - angle)
```
```java []
class Solution {
    public double angleClock(int h, int m) {
        double angle = Math.abs(30 * h - 5.5 * m);
        return Math.min(angle, 360 - angle);
    }
}
```

![upvote.png](https://assets.leetcode.com/users/images/9aacadc4-7741-4cf2-a3c7-9cd982032ef9_1781758694.8699002.png)

