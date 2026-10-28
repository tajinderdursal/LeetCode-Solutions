class Solution {
    long long mod= 1e9 + 7;
  long long solve(long long x ,long long n){
    long long ans=1;
    while(n>0){
        if(n%2){
            ans=(ans*x)%mod;
            n=n-1; 
        }
        else{
            x=(x*x)%mod;
            n=n/2;
        }
    }
    return ans;
  }
public:
    int countGoodNumbers(long long n) {
        long long  even=n/2,odd=n/2;
       
        if(n%2==1){
            even++;
        }
        long long a=solve(5,even);
        long long b=solve(4,odd);
        return  (a*b)%mod;
        
    }
};