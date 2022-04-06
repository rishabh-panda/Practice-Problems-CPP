#include<bits/stdc++.h>
using namespace std;

//print a 5x4 hollow rectangle pattern

int main() {
int rows = 5;
int cols = 4;

for (int i = 1; i <= rows; i++)
{
    for (int j = 1; j <= cols; j++)
    {
        
        //condition for hollow
        if(i==1 || i==rows || j==1 || j==cols)
        {
            cout<<"* ";
        }

        else
        cout<<"  ";
    }
    //as soon as a row (and its corresponding columns)
    //gets printed, move on to next line
    cout<<"\n";
    
}


return 0;
}