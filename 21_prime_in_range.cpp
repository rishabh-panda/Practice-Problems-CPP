#include<bits/stdc++.h>
using namespace std;

bool isPrime(int number)
{

for(int i=2; i<=sqrt(number); i++)
{
    if(number%i == 0)
    {
        return false;
    }
}
return true;
}

int main() {
int number1 = 24;
int number2 = 99;

if(number1 <= 1 || number2 <= 1)
{
    cout<<"neither prime nor composite";
    exit(0);
}

for(int i=number1; i<=number2; i++)
{
    if(isPrime(i) == true)
    {
        cout<<i<<" ";
    }
}
return 0;
}