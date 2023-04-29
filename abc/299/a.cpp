#include<unordered_set>
#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<set>

using namespace std;

int main() {
    
    int N;
    string S;

    cin>>N>>S;

    bool in = false;
    bool flag = false;

    for(int i = 0; i < N; i ++){
        if(S.at(i) == '|'){
            in = !in;
        }
        if(in && S.at(i) == '*'){
            flag = true;
        }
    }

    if(flag){
        cout<<"in"<<endl;
    }
    else{
        cout<<"out"<<endl;
    }

    return 0;
}
