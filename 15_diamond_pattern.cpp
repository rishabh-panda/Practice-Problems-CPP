#include<bits/stdc++.h>
using namespace std;

int main() {
int r = 5;

//defining upper half rows - dimensional formulation method
for (int i = 1; i <= r; i++)
{
    //defining spaces
    for (int j = 1; j <= r-i; j++)
    {
        cout<<"  ";
    }

    //defining upper half stars - dimensional formulation method
    for (int k = 1; k <= 2*i-1; k++)
    {
        cout<<"* ";
    }
    
    cout<<endl;
}

//defining lower half rows - dimensional formulation method
for (int i = r; i >= 1; i--)
{
    //defining spaces
    for (int j = 1; j <= r-i; j++)
    {
        cout<<"  ";
    }

    //defining lower half stars - dimensional formulation method
    for (int k = 1; k <= 2*i-1; k++)
    {
        cout<<"* ";
    }

    cout<<endl;
}

return 0;
}