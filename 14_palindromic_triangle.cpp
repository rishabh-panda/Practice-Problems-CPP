#include<bits/stdc++.h>
using namespace std;

int main() {
int r = 5;

//defining the row
for(int i=1; i<=r; i++)
{
    //defining spaces - dimensional formulation method
    for(int j=r-i; j>=1; j--)
    {
        cout<<"  ";
    }

    //defining the left half - dimensional formulation method
    for(int k=i; k>=1; k--)
    {
        cout<<k<<" ";
    }

    //defining the right half - dimensional formulation method
    for(int m=2; m<=i; m++)
    {
        cout<<m<<" ";
    }

    cout<<endl;
}

return 0;
}