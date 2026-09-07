class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n = nums.size();

        unordered_map<int,int>freq;

        for(int i = 0;i<n;i++){
            freq[nums[i]]++;
        }

        vector<vector<int>>buckets(n+1);

        for (auto x : freq){
            int num = x.first;
            int count = x.second;

            buckets[count].push_back(num);

        }

        vector<int>ans;
        for(int i = n;i>=1;i--){
            for(int num : buckets[i]){
                ans.push_back(num);

                if(ans.size() == k){
                    return ans;
                }
            }

        }
        return ans;
    }
};