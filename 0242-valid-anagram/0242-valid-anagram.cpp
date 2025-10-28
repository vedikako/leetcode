class Solution {
public:
    bool isAnagram(string s, string t) {
        //unordered_map<string, int> mpp;
        unordered_map<char, int> mpps;
        unordered_map<char, int> mppt;
        if (s.length() != t.length()) return false;

        for (int i=0;i<s.length();i++){
            mpps[s[i]]++;
        }
        for (int i=0;i<t.length();i++){
            mppt[t[i]]++;
        }
        if (mpps==mppt){
            return true;
        }else return false;
    }
};