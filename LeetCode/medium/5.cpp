class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        string Longest="", cur;
        if(n==0 || n==1) return s;
        for(int i = 0; i<n ; i++){
            /*Àu¤Æ*/
            int MinS = min(i, n-i+1);
            if(Longest.length() > MinS*2)
                return Longest;
            cur = PString(s, i-1, i+1);
            if(cur.length()>Longest.length()) Longest = cur;
            cur = PString(s, i, i+1);
            if(cur.length()>Longest.length()) Longest = cur;
        }
        return Longest;
    }
    string PString(string s, int left, int right){
        while(left>-1 && right<s.length() && s[left]==s[right]){
            left--;
            right++;
        }
        return s.substr(left+1, right-1-left);
    }
};
