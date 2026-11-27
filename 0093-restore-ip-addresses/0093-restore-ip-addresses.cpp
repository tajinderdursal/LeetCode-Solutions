class Solution {
vector<string> result;
    bool issubstr(int start, int end,string& s){
        if(s[start]=='0'&& start!=end){
            return false;

        }
        
        string part = s.substr(start, end-start+1);
        int num = stoi(part);

         if(num >= 0 && num <= 255){
          return true;}
        return false;
    }   


    void function(int start,string& s,string& cur,int dot){
        if(start==s.size()&&dot==4){
            cur.pop_back();
            result.push_back(cur);
            return;
        }
        for(int i=start;i<s.size()&& i<start+3;i++){
            if(issubstr(start,i,s)){
                int x=cur.size();
                cur += s.substr(start, i-start+1);
                cur.push_back('.');
                function(i+1,s,cur,dot+1);
                cur.resize(x);
            }
        }
    }
public:
    vector<string> restoreIpAddresses(string s) {
        
        string cur;
        function(0,s,cur,0);
        return result;

    }
};  