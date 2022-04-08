#include<bits/stdc++.h>
using namespace std;

int main() {
int r = 5;
for(int i=1; i<=r; i++)
{
    //space part - dimensional formulation method
    for(int j=r-i; j>=1; j--)
    {
        cout<<"  ";
    }

    //number part - dimensional formulation method
    for(int j=1; j<=i; j++)
    {
        cout<<j<<" ";
    } 

    cout<<endl;
}

return 0;
}