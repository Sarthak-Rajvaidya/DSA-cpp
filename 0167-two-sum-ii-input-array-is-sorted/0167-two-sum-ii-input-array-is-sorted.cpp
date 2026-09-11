class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();

       unordered_map<int,int>mpp;

       for(int i =0;i<n;i++){
        int needed = target-nums[i];
        if(mpp.find(needed)!=mpp.end()){
            return {mpp[needed]+1,i+1};
        }
        mpp[nums[i]] = i;
        
       }
       return {-1,-1};

        
    }
};