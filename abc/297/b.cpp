#include<unordered_set>
#include<iostream>
#include<string>

using namespace std;

int main() {
    
    string S;

    cin>>S;

    int xB = -1;
    int yB = -1;
    int xR = -1;
    int yR = -1;
    int z = -1;

    for(int i = 0; i < S.length(); i++){
        if(S.at(i) == 'B' && xB == -1){
            xB = i+1;
        }
        if(S.at(i) == 'B' && xB != -1){
            yB = i+1;
        }
        if(S.at(i) == 'R' && xR == -1){
            xR = i+1;
        }
        if(S.at(i) == 'R' && xR != -1){
            yR = i+1;
        }
        if(S.at(i) == 'K'){
            z = i+1;
        }
    }

    // even - odd = 6 - 3 = 3(odd)
    // odd - even = 5 - 2 = 3(odd)
    // even - even = 6 - 4 = 2(even)
    // odd - odd = 9 - 5 = 4(odd)
    if(xB == -1 || yB == -1){
        cout<<"No"<<endl;
        return 0;
    }
    if( (yB - xB) % 2 == 0){
        cout<<"No"<<endl;
        return 0;
    }
    if(z < xR || yR < z){
        cout<<"No"<<endl;
        return 0;
    }

    // cout<<"xB: "<<xB<<endl;
    // cout<<"yB: "<<yB<<endl;
    // cout<<"xR: "<<xR<<endl;
    // cout<<"yR: "<<yR<<endl;
    // cout<<"z: "<<z<<endl;

    cout<<"Yes"<<endl;

    return 0;
}
