#include<unordered_set>
#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<set>

using namespace std;


int main() {
    
    int N, T;

    cin>>N>>T;

    int C[N];

    int target;

    for(int i = 0; i < N; i++){
        cin>>C[i];
        if(i == 0){
            target = C[i];
        }
        if(C[i] == T){
            target = T;
        }
    }

    int max = 0;
    int player;

    for(int i = 0; i < N; i++){
        int num;
        cin>>num;
        if(C[i] == target && max < num){
            max = num;
            player = i;
        }
    }

    cout<<player+1<<endl;

    return 0;
}
