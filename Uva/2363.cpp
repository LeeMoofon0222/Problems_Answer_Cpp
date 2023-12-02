#include<stdio.h>
#include<math.h>
#define pi 3.14159265
int main(){
    int N;
    float x,y;
    scanf("%d",&N);
    for(int i=1;i<N+1;i++){
        scanf("%f %f",&x,&y);
        int year = ceil((x*x+y*y)*pi/2/50);
        printf("Property %d: This property will begin eroding in year %d.\n",i,year);
    }
    printf("END OF OUTPUT.");
    return 0;
}
