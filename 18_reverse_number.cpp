#include<bits/stdc++.h>
using namespace std;

int main() {
int number  = 987654;
int reversed = 0;
while (number>0)
{
    int remainder = number%10;
    reversed = reversed*10 + remainder;
    number/=10;
}
cout<<reversed;
return 0;
}