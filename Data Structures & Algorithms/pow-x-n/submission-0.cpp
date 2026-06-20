class Solution {
public:
    double myPow(double x, int n) {
        double a=1;
        if(n>0){
        while(n!=0){
            a=a*x;
            n--;
        }}
        else{
             while(n!=0){
            a=a*(1/x);
            n++;
        }
        }

        
        
        return a;
    }
};
