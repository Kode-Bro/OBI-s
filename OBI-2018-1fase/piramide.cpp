#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
int n, matriz[105][105], tab[105][105][105];
int knap(int linha, int coluna, int nivel){
    if(tab[linha][coluna][nivel]!=-1){
        return tab[linha][coluna][nivel];
    }
    if(nivel<=0 || coluna<=0 || linha>n){
        return tab[linha][coluna][nivel]=0;
    }
    int soma=0;
    for(int i=linha; i<=coluna; i++){
        soma+=matriz[nivel][i];
    }
    int vai=soma+knap(linha, coluna-1, nivel-1);
    int nao=soma+knap(linha+1, coluna, nivel-1);
    return tab[linha][coluna][nivel]=min(vai, nao);
}
int main()
{
    memset(tab, -1, sizeof(tab));
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> matriz[i][j];
        }
    }
    cout << knap(1, n, n) << endl;
    return 0;
}