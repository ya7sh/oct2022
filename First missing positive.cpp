class Solution {
   public:
    int firstMissingPositive(vector<int>& nums) {
        nums.push_back(0);
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= 0) nums[i] = INT_MAX;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (abs(nums[i]) < nums.size())
                nums[abs(nums[i])] = -1 * abs(nums[abs(nums[i])]);
        }
        int i = 1;
        while (i < nums.size()) {
            if (nums[i] < 0)
                i++;
            else
                break;
        }
        return i;
    }
};