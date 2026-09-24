class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,prod=1;
        int temp=n;
        while(temp)
        {
            int r=temp%10;
            sum+=r;
            prod*=r;
            temp=temp/10;
        }
        return prod-sum;
    }
};