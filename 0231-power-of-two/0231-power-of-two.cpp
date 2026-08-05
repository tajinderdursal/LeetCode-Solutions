class Solution {
public:
bool divide (int x){
    if(x==1){
        return true;
    }
    if(x%2==1){
        return false;
    }
    
    return divide(x/2);
}
    bool isPowerOfTwo(int n) {
  
        if(n==1){
            return true;
        }
        else if (n%2==1||n<=0){
            return false;
        }
          
        return  divide(n);
    ;
    } 
    
};