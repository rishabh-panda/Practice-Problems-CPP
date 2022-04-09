#include<bits/stdc++.h>
using namespace std;

int main() {
int number;
cout<<"enter number: ";
cin>>number;

if(number == 1)
    cout<<"neither prime nor composite";

int flag = 0;
for(int i=2; i<=sqrt(number); i++)
{
    if(number%i == 0)
    {
        flag = 1;
        cout<<"Composite";
        break;
    }
}

if(flag == 0)
    cout<<"prime";

return 0;
}