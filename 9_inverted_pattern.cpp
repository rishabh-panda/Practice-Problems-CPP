#include<bits/stdc++.h>
using namespace std;

int main() {
int r = 5;

for(int i=1; i<=r; i++)
{
    //dimensional formulation method
    for(int j=1; j<=r+1-i; j++)
    {
        cout<<j<<"  ";
    }

    cout<<endl;
}

return 0;
}