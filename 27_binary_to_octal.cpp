#include<bits/stdc++.h>
using namespace std;

int bin_to_oct(int binaryinput)
{
	int temp = binaryinput;
	int base = 1; //2^0
	int decimaloutput = 0;

	//binary to decimal
	while (temp)
	{
		int remainder = temp % 10;
		decimaloutput += remainder * base;
		base *= 2;
		temp /= 10;
	}

	//decimal to octal
    int octal_output[20];
	int i = 1;
	while (decimaloutput > 0)
	{
		octal_output[i++] = decimaloutput % 8;
		decimaloutput /= 8;
	}
	for (int j = i-1; j > 0; j--)
	{
		cout << octal_output[j];
	}
}

int main()
{
	bin_to_oct(101011);
	return 0;
}