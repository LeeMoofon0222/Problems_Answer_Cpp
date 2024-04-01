#include<bits/stdc++.h>


using namespace std;


int main(){

    int T,judge,SNP;

    string SN;

    cin>>T;

    for(int i = 0; i < T; i++){
        cin>>SN;
        judge = 0;
        SNP = 0;
        for(int d = 0;d<SN.size();d++){
            SNP += int(SN[d]);
        }
        if(SNP%3==0){

            for(int j=0;j<SN.size();j++){

                if(SN[j]%3==0){
                    judge++;
                }

            }
            if(judge%2==0) cout<<"Case "<<i+1<<": T\n";
            else cout<<"Case "<<i+1<<": S\n";

        }

        else{

            for(int k=0;k<SN.size();k++){
                if((SNP-int(SN[k]))%3==0){

                    SN = SN.erase(k,1);
                    for(int u=0;u<SN.size();u++){

                        if(SN[u]%3==0){
                            judge++;
                        }

                    }
                    if(judge%2==0) cout<<"Case "<<i+1<<": S\n";
                    else cout<<"Case "<<i+1<<": T\n";
                    break;
                }

                if(k==SN.size()-1){
                    cout<<"Case "<<i+1<<": T\n";
                    break;
                }
        }
        }
    }
    return 0;

}
