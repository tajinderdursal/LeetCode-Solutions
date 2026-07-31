class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int max=nums.size();
    int sum=0;
    for (int i=0;i<max;i++ ){
        sum=sum+nums[i];
    }
   int  num=((max*(max+1)/2)-sum);
    return num;

    }
};