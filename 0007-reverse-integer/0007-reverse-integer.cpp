class Solution {
public:
    int reverse(int x) {
        bool neg = x<0;
        x=abs(x);
        
        int ans=0;
        int temp;
        while(x>0)
        {
            temp=x%10;
            if((double)INT_MAX/ans<=10.0)
                return 0;
            ans*=10;
            ans+=temp;
            x/=10;
        }
        
        if(!neg)
        return ans;
        return ans*-1;
    }
};