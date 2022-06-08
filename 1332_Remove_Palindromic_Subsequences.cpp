class Solution {
public:
    
    bool isPal(string s)
    {
        int l = 0, r = s.length()-1;
        while(l < r)
        {
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    
    int removePalindromeSub(string s) {
        if(isPal(s)) return 1;
        else return 2;
    }
};