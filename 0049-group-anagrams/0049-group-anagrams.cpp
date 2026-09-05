class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        int n = strs.size();
        

        for(int i = 0;i<n;i++){
            string key = strs[i];

            sort(key.begin(),key.end());

            mpp[key].push_back(strs[i]);

        }
        vector<vector<string>>ans;

        for(auto x : mpp){
            ans.push_back(x.second);


        }

        return ans;

        
    }
};