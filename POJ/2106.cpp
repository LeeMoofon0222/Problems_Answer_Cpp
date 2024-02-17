//容器適配器 stack 與 vector
// 要把判斷是否為empty放在前面，否則無法運作
#include<iostream>
#include<stack>
#include<stdio.h>
using namespace std;

stack<int> op, val, s1;

void insertVal(int b,int d){
    while(!op.empty() && op.top()==3){
        b=!b;
        op.pop();
    }
    if(d) val.pop();
    val.push(b);
}

void calc(){
    int a = val.top();
    val.pop();
    int b = val.top();
    val.pop();
    int c = (a && b);
    int opr = op.top();
    op.pop();
    if(opr == 1){
        c = (a || b);
    }
    insertVal(c,0);
}

int main(){
    char c;
    int loop = 1;
    while((c = getchar()) != EOF){
        if(op.size()>0) op.pop();
        if(val.size()>0) val.pop();

        do{
            //printf("%c",c);
            if(c == '('){
            op.push(0);
            }
            else if(c == ')'){
                while(!op.empty() && op.top()!=0) {
                    calc();
                }
                op.pop();
                insertVal(val.top(),1);
            }

            else if(c == '!'){
                op.push(3);
            }
            else if(c == '&'){
                while(!op.empty() && op.top()!=0 && op.top()>=2) {
                    calc();
                }
                op.push(2);
            }
            else if(c == '|'){
                while(!op.empty() && op.top()!=0 && op.top()>=1) {
                    calc();
                }
                op.push(1);
            }
            else if(c == 'V'){
                insertVal(1,0);
            }
            else if(c == 'F'){
                insertVal(0,0);
            }
            s1 = val;
            /*
            for(int i = 0;i<s1.size();i++){
                if(!s1.empty())  printf("%d",s1.top());
                s1.pop();
            }*/
            //printf("\n");
        }
        while((c = getchar()) != '\n' && c!=EOF);

        while(!op.empty()) calc();
        /*
        for(int i = 0;i<val.size();i++){
            if(!val.empty())  printf("val: %d",val.top());
            val.pop();
        }*/
        printf("Expression %d: %c\n", loop++, (val.top() ? 'V':'F'));
    }
    return 0;
}
