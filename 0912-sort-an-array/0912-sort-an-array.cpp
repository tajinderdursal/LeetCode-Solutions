
class Solution {
    void merge(int low, int mid, int high, vector<int>& nums) {
        vector<int> result;
        int i = low;
        int j = mid + 1;

        while (i <= mid && j <= high) {
            if (nums[i] <= nums[j]) {
                result.push_back(nums[i]);
                i++;
            } else {
                result.push_back(nums[j]);
                j++;
            }
        }

        while (i <= mid) {
            result.push_back(nums[i]);
            i++;
        }

        while (j <= high) {
            result.push_back(nums[j]);
            j++;
        }

        for (int k = 0; k < result.size(); k++) {
            nums[low + k] = result[k];
        }
    }

    void merge_sort(int low, int high, vector<int>& nums) {
        if (low >= high) return;

        int mid = low + (high - low) / 2;

        merge_sort(low, mid, nums);
        merge_sort(mid + 1, high, nums);

        merge(low, mid, high, nums);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(0, nums.size() - 1, nums);
        return nums;
    }
};
