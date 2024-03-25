#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    vector<int> v;
    int cap,con,jud=0;
    int t[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    int most;
    while(cin>>s){
        cap=s.size();
        con = 0;
        for(int i=0;i<s.size();i++){
             char c=s[i];
             if(c=='1' || c=='0'){
                cap--;
                cout<<c;
                v.push_back(t[(int)c-65]);
             }
             else if(c=='-'){
                cap--;
                con++;
                cout<<c;
             }
             else{
                cout<<t[(int)c-65];
                v.push_back(t[(int)c-65]);
             }
        }
        cout<<" "<<cap<<" "<<con<<"\n";
    }
    return 0;
}
