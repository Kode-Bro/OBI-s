#include <bits/stdc++.h>
using namespace std;
int comp[105];
int main(){
    int n, m, x, resp=0;
    cin >> n;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> x;
        comp[x]=1;
    }
    for(int i=1; i<=n; i++){
        if(comp[i]==0){
            resp++;
        }
    }
    cout << resp;
    return 0;
}