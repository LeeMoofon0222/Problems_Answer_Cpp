#include<iostream>

using namespace std;
int main(){
    int count,W,S,Go_out;
    scanf("%d", &count);
    string name[count];
    int number[count];
    for(int i = 0;i<count;i++){
        scanf("%s", &name[i]);
        number[i] = i;
    }
    scanf("%d,%d", &W,&S);
    Go_out = W+S-1;
    for(int i = 0;i<count;i++){
        //printf("%d, %d\n",number[Go_out],Go_out);
        printf("%s\n",name[Go_out-1]);
        number[Go_out] = -1;
        for(int j = 0;j<S;j++){
            Go_out++;
            if(Go_out>count) Go_out =1;
            while(number[Go_out] == -1){
                Go_out++;
                if(Go_out>count) Go_out = 1;
            }
            //printf("%d\n",Go_out);
        }
        //printf("%s\n",name[number[Go_out]]);
    }
    return 0;
}
