class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         vector<int> result(nums.size());
        int pindex=0,nindex=1;
        for(int i=0;i<nums.size();i++){
           
            if(nums[i]<0){
                result[nindex]=nums[i];
                nindex=nindex+2;
            }
            else{
                result[pindex]=nums[i];
                pindex=pindex+2;
            }
        }
        return result;

    }
};