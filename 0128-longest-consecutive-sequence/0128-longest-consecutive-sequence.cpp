class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0;
    unordered_set<int> values(nums.begin(),nums.end());
    for(int n:values){
        if(values.count(n-1)){
            continue;
        }
        int cmax=1;
        int nextvalue=n+1;
        while(values.count(nextvalue)){
            cmax++;
            nextvalue++;
        }
        maxi=max(maxi,cmax);
    }
       return maxi; 
    }
};