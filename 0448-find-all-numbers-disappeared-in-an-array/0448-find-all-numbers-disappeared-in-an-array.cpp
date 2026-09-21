class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> result;
    int siz=nums.size();
     vector<int> arr(siz, 0);
      for(int i=0;i<nums.size();i++){
       arr[nums[i]-1]=1;
      }
      for (int i=0;i<arr.size();i++){
        if(arr[i]==0){
        result.push_back(i+1);
        }
      } 
      return result;
    }
};