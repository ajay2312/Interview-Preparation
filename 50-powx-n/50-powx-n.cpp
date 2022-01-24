class Solution {
public:
    double myPow(double x, long n) {
        if(x==0)
            return 0;
        bool temp=false;
        if(n<0){
            temp=true;
            n=-n;
        }
        double ans=1;
        while(n>0){
            if(n%2==0){
                x*=x;
                n/=2;
            }
            else{
                ans*=x;
                n-=1;
            }
        }
        if(temp)
            ans=(double)1.0/ans;
        return ans;
    }
};