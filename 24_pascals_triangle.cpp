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

int nCr(int n, int r)
{
    return factorial(n)/(factorial(n-r)*factorial(r));
}

int main() {

int rows = 10;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j <= i; j++)
    {
        cout<<nCr(i, j)<<" ";
    }
    
    cout<<endl;
}


return 0;
}