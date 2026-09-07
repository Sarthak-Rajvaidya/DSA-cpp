class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_set<int> used;
        vector<pair<int, int>> freqList;

        for(int i = 0; i < nums.size(); i++) {

            if(used.count(nums[i])) {
                continue;
            }

            int count = 0;

            for(int j = 0; j < nums.size(); j++) {
                if(nums[j] == nums[i]) {
                    count++;
                }
            }

            freqList.push_back({nums[i], count});
            used.insert(nums[i]);
        }

        vector<int> ans;

        for(int i = 0; i < k; i++) {

            int maxFreq = -1;
            int maxIndex = -1;

            for(int j = 0; j < freqList.size(); j++) {

                if(freqList[j].second > maxFreq) {
                    maxFreq = freqList[j].second;
                    maxIndex = j;
                }
            }

            ans.push_back(freqList[maxIndex].first);

            freqList[maxIndex].second = -1;
        }

        return ans;
    }
};