#include<iostream>

using namespace std;

int n=10000, total=0, prime[2000];


bool isprime(int k){
    for(int i=0;i<total;i++){
        if(k%prime[i]==0){
            return false;
        }
    }
    return true;
}

int main(void){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            prime[total++]=i;
        }
    }
    int m;
    scanf("%d",&m);
    while(m){
        int ans = 0;
        for(int i=0;m>=prime[i];i++){
            int cnt=0;
            for(int j=i;j<total && cnt<m;j++){
                cnt+=prime[j];
            }
            if(cnt==m){
                ans++;
            }
        }
        printf("%d\n",ans);
        scanf("%d",&m);
    }
    return 0;
}
