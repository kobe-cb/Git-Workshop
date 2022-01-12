class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> map1;
        int temp(0);
        for (unsigned i = 0; i < nums.size(); ++i) {
            map1.insert(pair<int, int>(nums.at(i), i));
        }
        for (unsigned i = 0; i < nums.size(); ++i) {
            temp = target - nums.at(i);
            if (map1.count(temp) > 0) {
                ans.push_back(i);
                ans.push_back(map1[temp]);
                return ans;
            }
        }
        return ans;
    }
};
