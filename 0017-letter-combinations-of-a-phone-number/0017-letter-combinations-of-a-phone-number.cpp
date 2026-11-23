class Solution {
    vector<string> result;
    vector<string> mp = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "pqrs", "tuv", "wxyz"
        };
    void function(string digits,string cur,int start){
        if (cur.size()==digits.size()){
            result.push_back(cur);
            return;
        }
        int x=digits[start]-'0';
        for(int i=0 ;i<mp[x].size();i++){
            cur.push_back(mp[x][i]);
            function(digits,cur,start+1);
            cur.pop_back();
        }
       
    }
public:
    vector<string> letterCombinations(string digits) {

     string cur="";
 function(digits,cur,0);
 return result;
        
    }
};