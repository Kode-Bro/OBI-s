#include <bits/stdc++.h>
using namespace std;
int l, c, l2, l1;
int main()
{
    cin >> l;
    cin >> c;
    l2=(c-1)*2+(l-1)*2;
    l1=l*c+(l-1)*(c-1);
    cout << l1 << endl;
    cout << l2 << endl;
    return 0;
}
