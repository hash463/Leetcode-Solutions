class Solution {
public:
    bool isAnagram(string s, string t) {
        int s1=s.size();
        int s2=t.size();
        if(s1!=s2) return 0;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s==t) return 1;
        return 0;
    }
};
