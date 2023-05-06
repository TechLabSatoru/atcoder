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

    char c[h][w];

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin>>c[i][j];
        }
    }

    int n;
    if(h < w){
        n = h;
    }
    else{
        n = w;
    }

    int ans[n+1] = {};

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(c[i][j] == '.'){
                continue;
            }
            int x = 0, k = 1;
            while(c[i + k][j + k] == '#' && c[i - k][j + k] == '#' && c[i + k][j - k] == '#' && c[i - k][j - k] == '#'){
                x++;
                k++;
            }
            ans[x]++;
        }
    }
    
    for(int ii = 1; ii <= n; ii++){
        cout<<ans[ii]<<" ";
    }
    cout<<endl;

    return 0;
}
