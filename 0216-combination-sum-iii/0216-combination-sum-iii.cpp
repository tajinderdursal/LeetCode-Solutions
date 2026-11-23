class Solution {
    vector<vector<int>> result;
    void function(int k,int sum,vector<int> arr,int i, vector<int> cur,int num){
        if(num==k&&sum==0){
            result.push_back(cur);
            return;  
        }
        if(i >= arr.size()) return;
        cur.push_back(arr[i]);
        function(k,sum-arr[i],arr,i+1,cur,num+1);
        cur.pop_back();
        function(k,sum,arr,i+1,cur,num);
        
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr={1,2,3,4,5,6,7,8,9};
        vector<int> cur;
         function(k,n,arr,0,cur,0);


        return result;
    }
};