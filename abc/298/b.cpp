#include<unordered_set>
#include<iostream>
#include<string>

using namespace std;

int main() {
    
    int N;

    cin>>N;

    int A[N][N];
    int B[N][N];

    /*
        ABC HEA JIH CGJ 
        EFG IFB GFE BFI
        HIJ JGC CBA AEH
    */

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin>>A[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin>>B[i][j];
        }
    }

    bool flag = true;
    bool flag01 = true;
    bool flag02 = true;    
    bool flag03 = true;

    // cout<<"--- start A ---"<<endl;
    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < N; j++){
    //         cout<<A[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"--- end A ---"<<endl;

    // cout<<"--- start B ---"<<endl;
    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < N; j++){
    //         cout<<B[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"--- end B ---"<<endl;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(A[i][j] == 1){
                if(B[i][j] != 1){
                    flag = false;
                }
                if(B[N-1-j][i] != 1){
                    flag01 = false;
                }
                if(B[N-1-i][N-1-j] != 1){
                    // cout<<B[N-1-i][N-1-j]<<" "<<i<<" "<<j<<" "<<(N+1-i)<<" "<<(N+1-j)<<" "<<endl;
                    flag02 = false;
                }
                if(B[j][N-1-i] != 1){
                    flag03 = false;
                }
            }
        }
    }

    if(flag || flag01 || flag02 || flag03){
        // cout<<flag<<" "<<flag01<<" "<<flag02<<" "<<flag03<<endl;
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
