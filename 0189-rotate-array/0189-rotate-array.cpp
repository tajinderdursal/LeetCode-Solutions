class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        k = k % nums.size();

        vector<int> arr;

        for(int i = 0; i < nums.size(); i++) {
            arr.push_back(nums[i]);
        }

        for(int i = 0; i < arr.size(); i++) {

            if(i + k < arr.size()) {

                nums[i + k] = arr[i];

            }
            else {

                int indx = (i + k) - nums.size();

                nums[indx] = arr[i];
            }
        }
    }
};