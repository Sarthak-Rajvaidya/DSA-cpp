class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();

        int minsum = INT_MAX;

        for(int i =0;i<n;i++){
            for(int j = i+1;j<n;j++){
                for(int k = j+1;k<n;k++){
                    if(nums[i] < nums[j] && nums[k] < nums[j]){
                        int sum = nums[i] + nums[j] + nums[k];
                        minsum = min(minsum,sum);
                    }

                }
            }
        }

        if(minsum  == INT_MAX){
            return -1;
        }
        return minsum;
        
        
    }
};