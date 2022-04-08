#include<bits/stdc++.h>
using namespace std;

int main() {
int r = 5;

for(int i=1; i<=r; i++)
{
    //dimensional formulation method
    for(int j=1; j<=i; j++)
    {
        //index positioning method
        if((i+j)%2 == 0)
        {
            cout<<"1 ";
        }

        else cout<<"0 ";
    }

    cout<<endl;
}

return 0;
}