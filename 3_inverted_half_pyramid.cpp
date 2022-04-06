#include<bits/stdc++.h>
using namespace std;

//print an inverted half pyramid

int main() {
int rows = 5;

for (int i = rows; i >= 1; i--)
{
    for (int j = 1; j <= i; j++)
    {
        cout<<"* ";
    }
    //as soon as a row (and its corresponding columns)
    //gets printed, move on to next line
    cout<<"\n";
    
}

return 0;
}