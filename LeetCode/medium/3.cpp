class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int end = 0;
        int count =0;
        bool out = false;
        for(int i=0;i<s.length();i++){
            end = i;
            for(int j = i+1;j<s.length();j++){
                for(int k=i;k<end+1;k++){
                    if(s[j]==s[k]){
                        out = true;
                        break;
                    };
                }
                if(out){
                    out = false;
                    break;
                } 
                end++;
            }
            if((end - i + 1)>count){
                count = end - i + 1;
            }
        }
        return count;
    }
};