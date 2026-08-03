class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        double reverse=0;
    while(temp>0){
        int a=temp%10;
      reverse=reverse*10+a;
     temp=temp/10;
    }
    if (reverse==x){
        return true;
    }
    return false;

    
    }
};