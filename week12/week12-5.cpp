class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size(); /// 陣列的大小
        vector<int> ans(n); /// ans 的大小，是n小心是圓括號
        for(int i=0;i<n;i++){
            ans[i] = nums[nums[i]]; /// 題目要你做這個
        }
        return ans;
    }
};
