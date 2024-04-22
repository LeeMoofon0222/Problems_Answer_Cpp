#include<bits/stdc++.h>


using namespace std;
int main(){

    int J,R,point;
    while (true){
        cin>>J>>R;
        if(J == 0){
            break;
        }
        int total[J] = {0},point;
        for(int i=0;i<J*R;i++){
            cin>>point;
            total[i%J] += point;
        }
        int max = 0;
        for (int j=0; j<J-1; j++) {
            if (total[j+1] >= total[max]) max = j+1;
        }
        cout << max+1 << "\n";
    }

    return 0;
}
