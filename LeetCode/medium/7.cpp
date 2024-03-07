class Solution {
public:
    int reverse(int x) {
        long output=0;
        while (x){
            output = output*10 + x%10;
            x/=10;
        }
        if(output < INT_MIN || output > INT_MAX) return 0;
        return int(output);
    }
};
