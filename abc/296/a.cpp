#include<iostream>
#include<string>

using namespace std;


int main() {

    int N;
    string S;
    
    cin>>N>>S;

    for(int i = 0; i < (N - 1); i++){
        if(S.at(i) == 'F' && S.at(i+1) == 'F'){
            cout<<"No"<<endl;
            return 0;
        }
        else if(S.at(i) == 'M' && S.at(i+1) == 'M'){
            cout<<"No"<<endl;
            return 0;
        }
        else{
            continue;
        }
    }

    cout<<"Yes"<<endl;

    return 0;
}
