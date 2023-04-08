#include<unordered_set>
#include<iostream>
#include<string>

using namespace std;

int main() {

    int N, X;

    cin>>N>>X;

    int A[N];
    unordered_set<int> ApulsX;

    for(int i = 0; i < N; i++){
        cin>>A[i];
        ApulsX.insert(A[i] + X);
    }
    
    // unordered_set<int>::iterator itr;
    // for(itr = ApulsX.begin(); itr != ApulsX.end(); itr++){
    //     cout<<(*itr)<<endl;
    // }

    for(int i = 0; i < N; i++){
        if(ApulsX.count(A[i]) > 0){
            cout<<"Yes"<<endl;
            return 0;
        }
    }

    cout<<"No"<<endl;

    return 0;
}
