//Solução por Tiago Silva
//Complexidade de Tempo: O(1)
//Link do Problema: https://neps.academy/problem/167

/*
Explicação da Solução:
É possível perceber a partir da imagem do problema o raciocínio para se achar o número de lajotas do tipo 1 e 2
*/

#include <bits/stdc++.h>
using namespace std;
int l, c, l2, l1;
int main()
{
    cin >> l >> c;
    //racicínio para se achar o número de lajotas do tipo 1
    l1=l*c+(l-1)*(c-1);
    //racicínio para se achar o número de lajotas do tipo 2
    l2=(c-1)*2+(l-1)*2;
    //por fim, imprimo as lajotas do tipo 1 e 2
    cout << l1 << endl;
    cout << l2 << endl;
    return 0;
}
