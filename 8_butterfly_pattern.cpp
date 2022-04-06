#include<bits/stdc++.h>
using namespace std;

int main() {
int rows = 5;

//row operation loop
for(int i = 1; i <= rows; i++)
{
    //left upper half wings
    for (int j = 1; j <= i; j++)
    {
        cout<<"* ";
    }
    
    //mid upper half spaces
    int spaces = 2*rows - 2*i;
    for (int j = 1; j <= spaces; j++)
    {
        cout<<"  ";
    }

    //right upper half wings
    for (int j = 1; j <= i; j++)
    {
        cout<<"* ";
    }

    cout<<endl;

}


//row operation loop
for(int i = rows; i >= 1; i--)
{
    //left lower half wings
    for (int j = 1; j <= i; j++)
    {
        cout<<"* ";
    }
    
    //mid lower half spaces
    int spaces = 2*rows - 2*i;
    for (int j = 1; j <= spaces; j++)
    {
        cout<<"  ";
    }

    //right lower half wings
    for (int j = 1; j <= i; j++)
    {
        cout<<"* ";
    }

    cout<<endl;
    
}

return 0;
}