#include<unordered_set>
#include<iostream>
#include<string>

using namespace std;

int main() {
    
    int N;
    string S;

    cin>>N>>S;

    bool pass = false;
    bool fail = false;

    for(int i = 0; i < N; i++){
        if(S.at(i) == 'o'){
            pass = true;
        }
        if(S.at(i) == 'x'){
            fail = true;
        }
    }

    if(pass && !fail){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
