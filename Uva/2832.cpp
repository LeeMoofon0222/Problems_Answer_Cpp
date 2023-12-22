#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int time=0, amount = 0;
string name = "";
void cham(int const w, int const wt,int &thisamount,int &thistime){
    if(wt>0){
        thisamount= thisamount + 1;
        thistime = thistime + (w-1)*20 + wt;
    }
}
int main(){
    int total, w1, wt1, w2, wt2, w3, wt3, w4, wt4,thisamount,thistime;
    char team[100];
    scanf("%d", &total);
    for(int i = 0; i<total ; i++){

        thisamount = 0;
        thistime = 0;
        scanf("%s %d %d %d %d %d %d %d %d", &team, &w1, &wt1, &w2, &wt2, &w3, &wt3, &w4, &wt4);
        cham(w1,wt1,thisamount,thistime);
        cham(w2,wt2,thisamount,thistime);
        cham(w3,wt3,thisamount,thistime);
        cham(w4,wt4,thisamount,thistime);
        if(thisamount>amount){
            name = team;
            amount = thisamount;
            time = thistime;
        }
        else if(thisamount==amount){
            if(thistime<time){
                name = team;
                amount = thisamount;
                time = thistime;
            }
        }
        //printf("%s %d %d", name, time, amount);
    }
    printf("%s %d %d", name.c_str(), amount, time);
    return 0;
}
