class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int count=0; 
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(count>0){
                    res.push_back(s[i]);
                }
                count++;
            }
            else{
                 count--;
                if(count>0){
                    res.push_back(s[i]);
                } 
            }
           
           
        
    }
      
    return res;
    }
};