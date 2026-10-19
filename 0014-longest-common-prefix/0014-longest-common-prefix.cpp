class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string  result="";
        for(int i=0;i<strs[0].size();i++){
            int count=0;
            for(int j=1;j<strs.size();j++){
                if(strs[0][i]==strs[j][i]){
                    count++;
                }
            }
            if(count==strs.size()-1){
                result.push_back(strs[0][i]);
            }
            else{
                break;
            }
            count=0;


        }

         return result;

        
        
    }
};