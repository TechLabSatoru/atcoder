#include<unordered_set>
#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<set>

using namespace std;

int main() {
    
    int h, w;

    cin>>h>>w;

    char a[h][w];
    char b[h][w];

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin>>a[i][j];
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin>>b[i][j];
        }
    }

    for(int ii = 0; ii < h; ii++){
        for(int jj = 0; jj < w; jj++){
            bool flag = true;
            for(int i = 0; i < h; i++){
                for(int j = 0; j < w; j++){
                    if(a[(i+ii)%h][(j+jj)%w] != b[i][j]){
                        flag = false;
                    }
                }
            }
            if(flag){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }

    cout<<"No"<<endl;

    return 0;
}
