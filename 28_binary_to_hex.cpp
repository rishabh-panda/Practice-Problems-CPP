#include<bits/stdc++.h>
using namespace std;

int bin_to_hex(int binary)
{
    int temp = binary;
    int base = 1; //2^0
    int decimal = 0;
    
    //binary to decimal
    while (temp)
    {
        int remainder1 = temp%10;
        decimal += remainder1 * base;
        base *= 2;
        temp /= 10;
    }

    //decimal to hexadecimal
    int hex_output[20];
    int i=1;
    while (decimal)
    {
        int remainder2 = decimal%16;
        hex_output[i++] = remainder2;
        decimal /= 16;
    }

    for (int j = i-1; j > 0; j--)
    {
        if (hex_output[j]>9)
        {
            cout<<(char)(hex_output[j]+55);
        }
        else cout<<hex_output[j];
    }
    
}

int main() {
bin_to_hex(101011);
return 0;
}
