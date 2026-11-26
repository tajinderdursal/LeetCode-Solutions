class Solution {
vector<vector<int>> result;
void function(int start,vector<int>& cur, int n ,int k){
    if(cur.size()==k){
        result.push_back(cur);
        return;
    
    }
    for(int i=start;i<=n;i++){
        cur.push_back(i);
        function(i+1,cur,n,k);
        cur.pop_back();
    }
   
}

public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> cur;
        function(1,cur,n,k);
        return result;
    }
};