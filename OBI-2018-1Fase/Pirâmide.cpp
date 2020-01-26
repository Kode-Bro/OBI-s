//Solu��o por Tiago Silva
//Complexidade de Tempo: O(N^2)
//Link do Problema: https://neps.academy/problem/166

/*
Explica��o do Solu��o:
Nesse problema utilizaremos uma fun��o que utiliza Programa��o Din�mica,
essa fun��o possui tr�s par�metros, o primeiro e o segundo chamado "inicio" e "fim", respectivamente,
com os dois iremos somar valores da matriz da coluna "inicio" at� a coluna "fim"
e o �ltimo par�metro "linha" que indica a linha da matriz em que estamos na fun��o.

*/
#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f //definimos INF como um n�mero muito grande
int n, matriz[105][105], dp[105][105];
int solve(int inicio, int fim, int linha){
    //checamos se o estado atual j� foi calculado
    if(dp[inicio][fim]!=-1){
        //se j� foi calculado retornamos o valor dele
        return dp[inicio][fim];
    }

    //casos bases da fun��o:
    //se linha for menor ou igual a 0, ent�o significa que estamos fora da matriz
    if(linha<=0){
        return dp[inicio][fim]=0;
    }

    //declaro a vari�vel soma que ir� guardar a soma dos valores da matriz
    int soma=0;

    //realizo a soma dos valores que est�o na linha da fun��o, desde a coluna inicio at� a coluna fim
    for(int i=inicio; i<=fim; i++){
        soma+=matriz[linha][i];
    }

    //declaro duas vari�veis pri e seg
    //a primeira onde modificamos o fim
    //a segunda onde modificamos o inicio
    //perceba que se modificamos tanto inicio como fim, diminu�mos a quantidade de caixas da pir�mide, sempre
    //igual ao n�mero da linha
    int pri=soma+solve(inicio, fim-1, linha-1);
    int seg=soma+solve(inicio+1, fim, linha-1);

    //por fim retornamos o valor do estado atual como o m�nimo entre as duas vari�veis
    return dp[inicio][fim]=min(pri, seg);
}
int main()
{
    memset(dp, -1, sizeof(dp));
    //todas as posi��es de dp s�o preenchidas com -1
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> matriz[i][j];
        }
    }
    //por fim, imprimo a fun��o da Programa��o Din�mica
    cout << solve(1, n, n) << endl;
    return 0;
}
