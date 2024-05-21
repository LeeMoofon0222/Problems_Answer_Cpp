#include<bits/stdc++.h>

using namespace std;

vector<bool> prime(9999999+1, true);
set<int> st;
void isprime(){

    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= 9999999+1; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= 9999999+1; i += p)
                prime[i] = false;
        }
    }
}

void dfs(int left, int right, string s){

    //for (int num : st) {
    //cout << "st "<<num<<" "<<"s "<<s<<endl;
    //}
    if(left == right){

        try{
            if(prime[stoi(s)]){
                st.insert(stoi(s));
            }
        }
        catch(const std::invalid_argument& e){

        }
    }

    for(int k = left; k<=right; k++){
        swap(s[left],s[k]);
        dfs(left+1,right,s);
        swap(s[left],s[k]);
    }

}

int main(){
    isprime();
    int c;
    string n;
    cin>>c;
    while(c--){
        cin>>n;
        st.clear();
        int len = n.length();
        for(int i = 1; i<pow(2,len) ; i++){
            string s = "";
            for(int j=0;j<len;j++){
                if(i&(1<<j)){
                    s.push_back(n[j]);
                }
                //當 i = 5 (二進位 101) 時，它對應選擇第 0 和第 2 個字元 "ac"
                //當 i = 3 (二進位 011) 時，它對應選擇第 0 和第 1 個字元 "ab"
                //因此要檢查 i 的第 j 個位元是否為1
            }
            dfs(0,s.length(),s);
        }
        cout<<st.size() << endl;
    }
    return 0;
}
