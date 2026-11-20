#include <iostream>
using namespace std;

const int N = 100005;   // Max nodes that we expect
vector<int> adj[N];     // adj. List

int main(){
    int n,m;
    cin>>n>>m;  // n is the number of nodes and m is the number of edges
    for(int i = 0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);    // u ke padosi m v
        adj[v].push_back(u);    // v ke padosi m u    
    }

    for(int i = 1;i<=n;i++){
        cout<<i<<" : ";
        for(auto x : adj[i]){
            cout<<x<<",";
        }
        cout<<endl;
    }
    return 0;
}