#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, v[1005], resp=1;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=1; i<n-1; i++){
        int diff=v[i]-v[i-1];
        if(diff!=v[i+1]-v[i]){
            resp++;
        }
    }
    cout << resp << endl;
    return 0;
}