#include<stdio.h>
using namespace std;
int main(){
    double  x,a,b,n,Min,n1,n2;

    scanf("%lf%lf",&x,&n);
    a=1;
    b=1;
    Min=n+1;
    while(a<=n&&b<=n){
        if(a/b>x){
            if(a/b-x<Min){
                Min=a/b-x;
                n1=a;
                n2=b;
            }
            b++;
        }
        else{
            if(x-a/b<Min){
                Min=x-a/b;
                n1=a;
                n2=b;
            }
            a++;
        }
    }
    printf("%.0f %.0f",n1,n2);
    return 0;
}
