class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    vector<int> ans;
    unordered_map<int, int> s;
    for (int i = 0; i < nums.size(); i++)
    {
      if (s.find(target - nums[i]) != s.end())
      {
        ans.push_back(s[target - nums[i]]);
        ans.push_back(i);
        return ans;
      }
      else
      {
        s[nums[i]] = i;
      }
    }
    return ans;
  }
};