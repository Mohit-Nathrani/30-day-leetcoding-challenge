class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string st: strs) {
            string copy(st);
            sort(copy.begin(), copy.end());
            mp[copy].push_back(st);
        }
        
        vector<vector<string>> ans;
        for(auto it: mp)
            ans.push_back(it.second);
        
        return ans;
    }
};