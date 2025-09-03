class Solution {
 public:
  void sub(vector<int>& nums, vector<vector<int>>& ans, int i,
           vector<int> temp) {
    if (i >= nums.size()) {
      ans.push_back(temp);
      return;
    }
    sub(nums, ans, i + 1, temp);
    temp.push_back(nums[i]);
    sub(nums, ans, i + 1, temp);
  }
  vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> temp;
    sub(nums, ans, 0, temp);

    return ans;
  }
};