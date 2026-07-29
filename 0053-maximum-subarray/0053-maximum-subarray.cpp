class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int bestfit=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++)
        {
            int v1=bestfit+nums[i];
            int v2=nums[i];
            bestfit=max(v1,v2);
            res=max(res,bestfit);
        }
        return res;
    }
};