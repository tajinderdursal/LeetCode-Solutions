class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int k=0;
       
        vector<string> result;
        for(int i=0;i<n;i++){
               
             
                result.push_back("Push");
                k++;

            
             if(target[i]!=k){
                result.push_back("Pop");
                i--;
               
            }
            if((i==target.size()-1)){
                    break;
                }
            
        }
        return result;
        
        
    }
};