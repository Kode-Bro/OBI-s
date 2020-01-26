//Solução por Tiago Silva
//Complexidade de Tempo: O(N^2)
//Link do Problema: https://neps.academy/problem/166

/*
Explicação do Solução:
Nesse problema utilizaremos uma função que utiliza Programação Dinâmica,
essa função possui três parâmetros, o primeiro e o segundo chamado "inicio" e "fim", respectivamente,
com os dois iremos somar valores da matriz da coluna "inicio" até a coluna "fim"
e o último parâmetro "linha" que indica a linha da matriz em que estamos na função.

*/
#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f //definimos INF como um número muito grande
int n, matriz[105][105], dp[105][105];
int solve(int inicio, int fim, int linha){
    //checamos se o estado atual já foi calculado
    if(dp[inicio][fim]!=-1){
        //se já foi calculado retornamos o valor dele
        return dp[inicio][fim];
    }

    //casos bases da função:
    //se linha for menor ou igual a 0, então significa que estamos fora da matriz
    if(linha<=0){
        return dp[inicio][fim]=0;
    }

    //declaro a variável soma que irá guardar a soma dos valores da matriz
    int soma=0;

    //realizo a soma dos valores que estão na linha da função, desde a coluna inicio até a coluna fim
    for(int i=inicio; i<=fim; i++){
        soma+=matriz[linha][i];
    }

    //declaro duas variáveis pri e seg
    //a primeira onde modificamos o fim
    //a segunda onde modificamos o inicio
    //perceba que se modificamos tanto inicio como fim, diminuímos a quantidade de caixas da pirâmide, sempre
    //igual ao número da linha
    int pri=soma+solve(inicio, fim-1, linha-1);
    int seg=soma+solve(inicio+1, fim, linha-1);

    //por fim retornamos o valor do estado atual como o mínimo entre as duas variáveis
    return dp[inicio][fim]=min(pri, seg);
}
int main()
{
    memset(dp, -1, sizeof(dp));
    //todas as posições de dp são preenchidas com -1
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> matriz[i][j];
        }
    }
    //por fim, imprimo a função da Programação Dinâmica
    cout << solve(1, n, n) << endl;
    return 0;
}
