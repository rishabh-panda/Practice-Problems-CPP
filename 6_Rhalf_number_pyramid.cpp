#include<bits/stdc++.h>
using namespace std;

int main() {
int rows = 5;
int num = 1;
for(int i = 1; i <= rows; i++)
{
    for (int j = 1; j <= i; j++)
    {
        cout<<num<<" ";
    }
    
    cout<<endl;
    num++;
}

return 0;
}