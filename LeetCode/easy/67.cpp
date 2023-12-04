class Solution {
public:
    string addBinary(string a, string b) {
        int ML = max(a.length(),b.length());
        string output = "";
        string low = "";
        int back = min(a.length(),b.length())-1;
        if(a.length()>b.length()){
            output = a;
            low = b;
        }
        else{
            output = b;
            low = a;
        }
        bool carry = false;
        for(int i = ML-1; i>-1; i--){
            if(back<0){
                if(carry && output[i] == '1'){
                    output[i] = '0';
                }
                else if(carry && output[i] == '0'){
                    output[i] = '1';
                    carry = false;
                }
                continue;
            }
            if(output[i] == '1' && low[back] == '1'){
                if(carry){
                    output[i] = '1';
                }
                else{
                    output[i] = '0';
                    carry = true;
                }
            }
            else if(output[i] == '0' && low[back] == '0'){
                if(carry){
                    output[i] = '1';
                    carry = false;
                }
                else{
                    output[i] = '0';
                }
            }
            else{
                if(carry){
                    output[i] = '0';
                    carry = true;
                }
                else{
                    output[i] = '1';
                }
            }
            back--;
        }
        if(carry){
            if(a.length() == b.length() && a[0]== '1' && b[0]=='1'){
                output = '1' + output;
            }
            else{
                output[0] = '0';
                output = '1' + output;
            }

        }
        return output;
    }
};
