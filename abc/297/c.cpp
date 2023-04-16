#include<unordered_set>
#include<iostream>
#include<string>

using namespace std;

int main() {
    
    int H, W;

    cin>>H>>W;

    string S[H];

    for(int i = 0; i < H; i++){
        cin>>S[i];
    }

    for(int i = 0; i < H; i++){
        for(int j = 0; j < (S[i].length() - 1); j++){
            if(S[i].at(j) == 'T' && S[i].at(j+1) == 'T'){
                S[i].at(j) = 'P';
                S[i].at(j+1) = 'C';
            }
        }
    }

    for(int i = 0; i < H; i++){
        cout<<S[i]<<endl;
    }

    return 0;
}
