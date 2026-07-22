class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0,i=0,j=0;

        vector<int> arr;
        for (int i=0;i<nums.size();i++){
           arr.push_back(nums[i]);
        }
        for ( i,j;i<arr.size();i++){
            if(arr[i]==0){
                count++;
               
            }
           else{ nums[j]=arr[i];
            j++;
           }
        }
        while(count!=0){
            nums[j]=0;
            count--;
            j++;
        }
        
      
    }
};