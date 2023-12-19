#include<stdio.h>
using namespace std;
const int maxn = 300;
int main(){
    double Len[maxn], num;
    Len[0] = 0;
    int i;
    for(i = 1 ; Len[i-1]<5.2 ; i++){
        Len[i] = Len[i-1] + 1.0/double(i+1.0);
    }
    scanf("%lf",&num);
    while(num){
        int L = 0, R=i;
        while(R-1>L){
            int M = (R+L)/2;
            if(num>Len[M-1]&&num<Len[M]){
                R=M;
                break;
            }
            else if(num>Len[M]){
                L = M+1;
            }
            else{
                R = M-1;
            }
        }
        printf("%d card(s)\n", R);
        scanf("%lf",&num);
    }
}
