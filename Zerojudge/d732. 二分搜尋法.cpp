/*#include <iostream>
using namespace std;
void search(int arr1[],int num, int n, int m, int f) {
	//cout<<"num"<<num<<" "<<"gay"<<f<<m<<n<<endl;
        if (arr1[f] == num) {
            cout << f+1;
        }
        else if (arr1[n-1] == num) {
            cout << n;
        }
        else if (n == 1) {
            cout << 0;
        }
        else if (arr1[m] == num) {
            cout << m+1;
        }
        else if (arr1[m] > num) {
            n = m;
            m = n / 2;
            search(arr1, num, n, m, f);
        }
        else{
            f = m;
            m = n/4+f;
            search(arr1, num, n, m, f);
        }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, k, f=0 ,m, num;
    cin >> n >> k;
    int arr1[n];
    m = n / 2;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int j = 0; j < k; j++) {
        cin >> num;
        search(arr1, num, n, m, f);
    }
}
#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, k, f=0 ,m, num,right;
	right=n;
    cin >> n >> k;
    int arr1[n];
    int arr2[k];
    int output[k];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int j = 0; j < k; j++) {
        cin >> arr2[j];	
		}
		
    for(int g;g<k;g++){
    	num=arr2[g];
    	n=right;
    	f=0;
    	m = n / 2;
    	while(true){
    	//cout<<"num"<<num<<" "<<"gay"<<f<<m<<n<<endl;
        if (arr1[f] == num) {
            output[g]=f+1;
            break;
        }
        else if (arr1[n-1] == num) {
            output[g]=n;
            break;
        }
        else if (f+1 == n) {
            output[g]=0;
            break;
        }
        else if (arr1[m] == num) {
            output[g]=m+1;
            break;
        }
        else if (arr1[m] > num) {
            n = m;
        }
        else{
            f = m;
        }
        m=(f+n)/2;
    }
	}
	for(int v=0;v<k;v++){
		cout<<output[v];
	}
}*/
#include <iostream>
using namespace std;
int main(){
	int n, k, f=0 , middle, num, lefa, righa;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<k;i++){
		righa=n;
		lefa=0;
		int x;
		cin>>x;
		while(lefa+1<righa){
			middle=(lefa+righa)/2;
			cout<<"left: "<< lefa <<" middle"<< middle <<" right "<<righa<<endl;
			if(a[middle]<=x){
			lefa=middle;
			}
			else
			{
				righa=middle;
			}
		}
		cout<<"left: "<< lefa <<" middle"<< middle <<" right "<<righa<<endl;
		if(a[lefa]==x){
			cout<<lefa+1<<"\n";
		}
		else{
			cout<<"0\n";
		}
	}
}

