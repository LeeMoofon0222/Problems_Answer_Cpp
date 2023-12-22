#include<stdio.h>
#include<iostream>
#include <string>
using namespace std;


int main(){
    string quick="";
    int A;
    while (getline(cin, quick)){
        if(quick == "#") break;
        A = 0;
        for(int i = 0; i<quick.length();i++){
            if(quick[i] != ' '){
                A+= (i+1) * (quick[i] -'A' + 1);
            }
        }
        printf("%d\n", A);
    }
    return 0;
}
