#include<iostream>
using namespace std;

int main()
{
	int r,c;
	while(cin>>r>>c){
		int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	for(int a=0;a<c;a++){
		for(int b=0;b<r;b++){
			cout<<arr[b][a];
			if(b!=r-1){
				cout<<" ";	
			}
		}
		cout<<endl;
	}
	}
}
