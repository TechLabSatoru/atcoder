#include<unordered_set>
#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<set>

using namespace std;

int main() {
    
    int n, a, b;

    cin>>n>>a>>b;

    int c[n];

    for(int i = 0; i < n; i++){
        cin>>c[i];
        if(c[i] == a+b){
            cout<<i+1<<endl;
        }
    }

    return 0;
}
