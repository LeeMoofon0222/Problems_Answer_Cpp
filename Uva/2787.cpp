#include<iostream>
using namespace std;
int main(){
    int a[15],count,n;
    scanf("%d",&a[0]);
    while(a[0]!=-1){
        n=1;
        for(;; n++){
            scanf("%d",&a[n]);
            if(a[n]==0){
                break;
            }
        }
        count=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]*2==a[j] || a[j]*2==a[i]){
                    count++;
                }
            }
        }
        printf("%d\n",count);
        scanf("%d",&a[0]);
    }
    return 0;
}
