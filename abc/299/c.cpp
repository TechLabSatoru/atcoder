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

    if(S.find('o') == string::npos || S.find('-') == string::npos){
        cout<<-1<<endl;
        return 0;
    }

    int max = -1;
    int num = 0;

    for(int i = 0; i < N; i++){
        if(S.at(i) == 'o'){
            num++;
        }
        else{
            if(max < num){
                max = num;
            }
            num = 0;
        }
    }

    if(max < num){
        max = num;
    }

    cout<<max<<endl;

    return 0;
}
