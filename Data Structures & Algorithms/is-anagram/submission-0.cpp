class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;

        if(s.length() != t.length()){
            return false;
        }

        for(auto x:s){
            mp[x]++;
        }

        for(auto y:t){
            mp[y]--;   
        }

        for(auto& pair:mp){
            if(pair.second != 0){
                return false;
            }
        }
        return true;
    }
};
