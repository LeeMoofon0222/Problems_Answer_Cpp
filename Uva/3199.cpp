#include<stdio.h>

using namespace std;

int count;

int calc(int k, int b){
    int count = 0;
    if(b==10){
        for(int j = 0 ; j<4;j++){
            count += k%10;
            k/=10;

        }
    }
    else if(b==12){
        for(int j = 0 ; j<4;j++){
            count += k%12;
            k/=12;
        }
    }
    else{
        for(int j = 0 ; j<4;j++){
            count += k%16;
            k/=16;
        }
    }

    return count;
}

int main(){
    for(int i = 2992; i<10000; i++){
        if(calc(i,10) == calc(i,12) && calc(i,10) == calc(i,16))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
