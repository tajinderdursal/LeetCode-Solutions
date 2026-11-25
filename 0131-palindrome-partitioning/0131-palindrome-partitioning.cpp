class Solution {
   
    vector<vector<string>> result;
    bool palidrome(int start,int end,string& s ){
        while(start<end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;

        }
        return true;

    }
   void function(vector<string>& cur,string& s,int start){
    if(start==s.size()){
        result.push_back(cur);
        return;
    }
    for(int j=start;j<s.size();j++){
        if(palidrome(start,j,s)){
            cur.push_back(s.substr(start,j-start+1));
            function(cur,s,j+1);
            cur.pop_back();
        }
    }
   }
public:
    vector<vector<string>> partition(string s) {
        vector<string> cur;
     
        function(cur , s , 0);
         return result;
    }
};