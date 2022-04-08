#include<bits/stdc++.h>
using namespace std;

int main() {
int r = 5;
for(int i=1; i<=r; i++)
{
    //dimensional formulation method
    for(int j=r-i; j>=1; j--)
    {
        cout<<"  ";
    }

    //dimensional formulation method
    for(int j=1; j<=r; j++)
    {
        cout<<i<<" ";
    } 

    cout<<endl;
}

return 0;
}