#include<bits/stdc++.h>

using namespace std;

bool judge(int Inum){

    string number = to_string(Inum);
    if(Inum<9999) number = number + '0';
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(number[i]==number[j]) return false;
        }
    }
    return true;
}

bool same(int Inum1,int Inum2){

    string num1 = to_string(Inum1);
    string num2 = to_string(Inum2);
    if(Inum1<9999) num1 = num1 + '0';
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(num1[i]==num2[j]) return false;
        }
    }
    return true;
}

int main(){
    int N,num,den;
    bool con;
    while(cin>>N&&N!=0){
        con = false;
        for(int k=1234;k<98765;k++){
            if(N*k>99999) break;
            if(judge(k) && judge(N*k) && N*k>9999){
                if(same(k,N*k)){
                   if(k<9999) cout<<N*k<<" / "<<"0"<<k<<" = "<<N<<"\n";
                   else cout<<N*k<<" / "<<k<<" = "<<N<<"\n";
                   con=true;
                }
            }
        }
        if(!con) cout<<"There are no solutions for "<<N<<".\n";
    }

    return 0;
}
