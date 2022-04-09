#include<bits/stdc++.h>
using namespace std;

int bin_to_dec(int n)
{
    int temp = n;
    int decimal = 0;
    int conversion_base = 1; //2^0

    while (temp)
    {
        int last_digit = temp%10;
        decimal += last_digit*conversion_base;
        conversion_base *= 2;
        temp /= 10;
    }

    return decimal;
    
}

int main() {
cout<<bin_to_dec(101011);
return 0;
}