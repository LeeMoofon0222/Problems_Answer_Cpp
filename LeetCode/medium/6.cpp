class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1) return s;
        vector<int> v;
        string ans = "";
        int over = numRows*2-2,x=-2;
        for(int k = 0 ; k<s.size() ; k+=over){
                v.push_back(k);
        }
        for(int i = 1 ; i<numRows-1 ; i++,x-=2){
            for(int j = i ; j<s.size()||(j+over+x)<s.size() ; j+=over){
                if(j<s.size()) v.push_back(j);
                if ((j+over+x)<s.size()) v.push_back(j+over+x);
            }
        }
        for(int k = numRows-1; k<s.size() ; k+=over){
                v.push_back(k);
        }
        for(int j = 0;j<v.size();j++){
            ans+=s[v[j]];
        }
        return ans;
        /*
        0   6    12
        1 5 7 11 13
        2 4 8 10
        3   9
        */
    }
};





