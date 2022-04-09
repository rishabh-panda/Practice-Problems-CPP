#include<bits/stdc++.h>
using namespace std;

int main() {
int number = 9474;
int temp1 = number;
int temp2 = number;
int result = 0;

//couting the digits
int count = 0;
while (temp1>0)
{
    temp1/=10;
    count++;
}

//Armstrong number computation
while (temp2>0)
{
    int remainder = temp2%10;
    result += pow(remainder, count);
    temp2/=10;
}

if (result == number)
    cout<<"Armstrong Number";
else cout<<"Not Armstrong Number";
return 0;
}