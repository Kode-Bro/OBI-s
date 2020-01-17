#include <bits/stdc++.h>
using namespace std;
int comp[305];
int main()
{
    int n, c, m, resp;
    int c1[60], m1[305];
    cin >> n >> c >> m;
    resp=c;
    for(int i=0; i<c; i++){
        cin >> c1[i];
    }
    for(int i=0; i<m; i++){
        cin >> m1[i];
    }
    for(int i=0; i<c; i++){
        for(int j=0; j<m; j++){
            if(c1[i]==m1[j] && comp[c1[i]]==0){
                comp[c1[i]]=1;
                resp--;
            }
        }
    }
    cout << resp << endl;
    return 0;
}