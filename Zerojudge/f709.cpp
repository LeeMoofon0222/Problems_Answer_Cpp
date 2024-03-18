#include<bits/stdc++.h>

using namespace std;
int main(){
    int t,m,d,sum=0;
    scanf("%d",&t);
    int daymonth[12]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    string dayweek[7]={"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    while(t--){
        scanf("%d %d", &m,&d);
        sum=0;
        for(int i=0;i<m;i++){
            sum += daymonth[i];
        }
        sum += d;
        cout<<dayweek[sum%7]<<"\n";
    }
    return 0;
}
