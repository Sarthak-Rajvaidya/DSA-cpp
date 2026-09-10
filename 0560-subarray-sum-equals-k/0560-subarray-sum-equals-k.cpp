class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        mpp[0]=1;

        int sum =0;
        int cnt =0;

        for(int i =0;i<n;i++){
            sum+=nums[i];

            if(mpp.find(sum-k)!=mpp.end()){
                cnt+=mpp[sum-k];
            }
            mpp[sum]++;
        }
        return cnt;
        
    }
};