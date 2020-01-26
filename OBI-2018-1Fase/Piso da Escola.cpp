//Solu��o por Tiago Silva
//Complexidade de Tempo: O(1)
//Link do Problema: https://neps.academy/problem/167

/*
Explica��o da Solu��o:
� poss�vel perceber a partir da imagem do problema o racioc�nio para se achar o n�mero de lajotas do tipo 1 e 2
*/

#include <bits/stdc++.h>
using namespace std;
int l, c, l2, l1;
int main()
{
    cin >> l >> c;
    //racic�nio para se achar o n�mero de lajotas do tipo 1
    l1=l*c+(l-1)*(c-1);
    //racic�nio para se achar o n�mero de lajotas do tipo 2
    l2=(c-1)*2+(l-1)*2;
    //por fim, imprimo as lajotas do tipo 1 e 2
    cout << l1 << endl;
    cout << l2 << endl;
    return 0;
}
