#include <iostream>

using namespace std;

void Flip(int R, int C);

void Rotate(int R, int C);


int R, C, M;

int ARR[1000][1000];
int FARR[1000][1000];

int main() {

    int OP[1000];

    while(cin >> R >> C >> M){

            for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> ARR[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        cin >> OP[i];
    }

    for (int i = M-1; i > -1; i--) {


        if(OP[i] == 0) {
            Rotate(R, C);
            int CH = R;
            R = C;
            C = CH;
        }
        else{
            Flip(R, C);
        }
    }


    cout << R << " " << C<<endl;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if(j!=C-1){
                cout << ARR[i][j]<<" ";
            }
            else{
                cout << ARR[i][j];
            }
        }
        cout<<endl;
    }

    }


    return 0;
}

void Flip(int R, int C) {
    for (int i = 0; i < R / 2; i++) {
        for (int j = 0; j < C; j++) {
            int tmp = ARR[i][j];
            ARR[i][j] = ARR[R-i-1][j];
            ARR[R-i-1][j] = tmp;
        }
    }
}

void Rotate(int R, int C) {
    int k=0;
    for (int i = C-1; i > -1; i--) {
        for (int j = 0; j < R; j++) {
            FARR[k][j] = ARR[j][i];
        }
        k+=1;
    }

    for (int i = 0; i < C; i++) {
        for (int j = 0; j < R; j++) {
             ARR[i][j] = FARR[i][j];
        }
    }

}
