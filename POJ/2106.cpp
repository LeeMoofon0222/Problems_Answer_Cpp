//容器適配器 stack 與 vector
#include<iostream>
#include<vector>
#include <string>
using namespace std;

vector<char> v;
vector<char> nv;




char Not(char c1){
    if(c1=='V'){
        return 'F';
    }
    return 'V';
}
char And(char c1,char c2){
    if(c1=='V' && c2=='V'){

        return 'V';
    }
    return 'F';
}
char Or(char c1,char c2){
    if(c1=='V' || c2=='V'){
        return 'V';
    }
    return 'F';
}
char TorF(vector<char> v1){
    while(v1.size()!=1){
        for(int n=0;n<3;n++){
            if(n==0){
                for(int m=0;m<v1.size();m++){
                    if(v1[m] == '!'){
                        v1.erase(v1.begin()+m);
                        v1.insert(v1.begin()+m, Not(m));
                        v1.erase(v1.begin()+m+1);
                    }
                }
            }
            if(n==1){
                for(int m=0;m<v1.size();m++){
                    if(v1[m] == '&'){
                        v1.erase(v1.begin()+m);
                        v1.insert(v1.begin()+m, And(v1[m-1],v1[m]));
                        v1.erase(v1.begin()+m+1);
                        v1.erase(v1.begin()+m-1);
                    }
                }
            }
            if(n==2){
                for(int m=0;m<v1.size();m++){
                    if(v1[m] == '|'){
                        v1.erase(v1.begin()+m);
                        v1.insert(v1.begin()+m, Or(v1[m],v1[m-1]));
                        v1.erase(v1.begin()+m+1);
                        v1.erase(v1.begin()+m-1);
                    }
                }
            }
        }
    }

    return v1[0];
}
int main() {
    int i,j,d=1;
    char c,c1;
    bool out=false;
    string reg;

    while(getline(cin,reg)){
        for(int g=0;g<reg.size();g++){
            if(reg[g]!=' ') v.push_back(reg[g]);
        }
        for(i=0;i<v.size();i++){
            if(v[i]==')'){
                v.erase(v.begin()+i);
                for(j=i-1;v[j]!='(';j--){
                    nv.insert(nv.begin(), v[j]);
                    v.erase(v.begin()+j);
                }
                v.erase(v.begin()+j);
                v.insert(v.begin()+j, TorF(nv));
                nv.clear();
                i=0;
            }
            if(i==v.size()-1){
                out = true;
            }
        }
        if(out){
            cout<<"Expression"<<" "<<d<<":"<<" "<<TorF(v)<<"\n";
            d++;
            v.clear();
        }
    }



    return 0;
}
