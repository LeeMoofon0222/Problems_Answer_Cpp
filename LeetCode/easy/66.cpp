class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1;i>-1;i--){
            int now = digits[i]+carry;
            if(now>=10){
                now%=10;
                carry = 1;
            }
            else carry =0;
            digits[i]=now;
            if(i==0 && digits[0]==0){
                digits.insert(digits.begin(),1);
            }
        }
        return digits;
    }
};