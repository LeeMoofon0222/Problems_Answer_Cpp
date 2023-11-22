#include<iostream>

using namespace std;

int main(){
    int num;
    scanf("%d", &num);
	for(int j=0;j<num;j++){
        float avg, sum=0.0, a[12]={0};
        for(int i=0;i<12;i++){
            scanf("%f", &a[i]);
            sum+=a[i];
        }
        avg=sum/12;
        avg = to_string(avg);
        printf("%d $%s",num,avg);
	}

    return 0;
}
