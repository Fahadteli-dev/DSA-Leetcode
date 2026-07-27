

class Solution {
public:
    int fun(int n)
        {
            int sum=0;
            while(n>0)
            {
                int d=n%10;
                sum=sum+d*d;
                n=n/10;
            }
            return sum;
        }
    bool isHappy(int n) {
       
        int fast=n;
        int slow=n;
         do {
            slow = fun(slow);
            fast = fun(fast);
            fast=fun(fast);
        } while (fast != 1 && slow != fast);
       return  fast==1;
    }
};