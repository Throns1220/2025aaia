class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size(); /// �}�C���j�p
        vector<int> ans(n); /// ans ���j�p�A�On�p�߬O��A��
        for(int i=0;i<n;i++){
            ans[i] = nums[nums[i]]; /// �D�حn�A���o��
        }
        return ans;
    }
};
