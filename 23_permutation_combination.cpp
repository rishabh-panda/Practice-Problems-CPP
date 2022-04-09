#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact*=i;
    }

    return fact;
}

int nPr(int n, int r)
{
    return factorial(n)/factorial(n-r);
}

int nCr(int n, int r)
{
    return factorial(n)/(factorial(n-r)*factorial(r));
}

int main() {

int n = 5;
int r = 2;

cout<<"permutation: "<<nPr(n, r)<<endl;
cout<<"combination: "<<nCr(n, r);

return 0;
}