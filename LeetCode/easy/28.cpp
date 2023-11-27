class Solution {
public:
    int strStr(string haystack, string needle) {
        bool b = false;
        for(int i=0;i<haystack.length();i++){
            if(haystack[i] == needle[0]){
                for(int j=1;j<needle.length();j++){
                    if(haystack[i+j]!=needle[j]){
                        b=true;
                        break;
                    }
                }
                if(b){
                    b = false;
                    continue;
                }
                return i;
            }
        }
        return -1;
    }
};