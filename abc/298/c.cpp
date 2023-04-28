#include<unordered_set>
#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<set>

using namespace std;

const int N = 2e5+10;

vector<int> box[N];
set<int> hash_box[N];

int main() {

    int n, Q;

    cin>>n>>Q;

    int query;

    for(int i = 0; i < Q; i++){
        
        cin>>query;
        
        if(query == 1){
            int i, j;
            cin>>i>>j;
            box[j].push_back(i);
            hash_box[i].insert(j);
        }

        if(query == 2){
            int i;
            cin>>i;
            sort(box[i].begin(), box[i].end());
            vector<int>::iterator itr;
            for(itr = box[i].begin(); itr != box[i].end(); itr++){
               cout<<(*itr)<<" ";
            }
            cout<<endl;
        }

        if(query == 3){
            int i;
            cin>>i;
            set<int>::iterator itr;
            for(itr = hash_box[i].begin(); itr != hash_box[i].end(); itr++){
                cout<<(*itr)<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
