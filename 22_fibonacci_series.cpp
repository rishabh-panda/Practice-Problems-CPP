#include<bits/stdc++.h>
using namespace std;

int main() {
int first = 1;
int second = 1;
int third;
int last_term = 25;
cout<<first<<" "<<second<<" ";
for (int i = 1; i <= last_term-2; i++)
{
    third = first + second;
    cout<<third<<" ";
    first = second;
    second = third;
}

return 0;
}