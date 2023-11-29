class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = 0;
        bool word = false;
        for(int i=s.length()-1;i>-1;i--){
            if(s[i]!=' '){
                j++;
                word = true;
            }
            if(word && (s[i]==' '||i==0)){
                return j;
            }
        }
        return 0;
    }
};