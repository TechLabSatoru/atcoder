#include<iostream>
#include<string>

using namespace std;

int main() {

    string s[8];
    char a[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

    for(int i = 0; i < 8; i++) {
        cin>>s[i];
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(s[i].at(j) == '*'){
                cout<<a[j]<<(8 - i)<<endl;
            }
        }
    }

    return 0;
}
