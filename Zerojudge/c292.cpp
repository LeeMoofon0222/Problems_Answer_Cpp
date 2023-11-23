#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,direction;
    cin>>n>>direction;
    int a[n][n];
    int npx=n/2;
    int npy=n/2;
    int lenth=0;
    int nlenth=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<a[npx][npy];
    for(int i=0;i<n*2-1;i++)
	{
		//cout<<"the lenth is"<<lenth<<endl;
		if(i%2==0){
			lenth++;
		}
		nlenth=lenth;
		for(int j=0;j<lenth;j++){
		if(i==n*2-2&&j==lenth-1){
			break;
		}
		switch(direction)
		{
		case 0:
			npy-=1;
			cout<<a[npx][npy];
			nlenth--;
			if(nlenth==0)
			{
			direction=1;
			}
			break;
		case 1:
			npx-=1;
			cout<<a[npx][npy];
			nlenth--;
			if(nlenth==0)
			{
			direction=2;
			}
			break;
		case 2:
			npy+=1;
			cout<<a[npx][npy];
			nlenth--;
			if(nlenth==0)
			{
			direction=3;
			}
			break;
		case 3:
			npx+=1;
			cout<<a[npx][npy];
			nlenth--;
			if(nlenth==0)
			{
			direction=0;
			}
			break;
		}
		}
		
		
	}
}
/*
112233444
112222333333333
3
1
4 1 2
3 0 5
6 7 8

5
0
3 4 2 1 4
4 2 3 8 9
2 1 9 5 6
4 2 3 7 8
1 2 6 4 3
*/

