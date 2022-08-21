#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int n = 1111;
    int sum = 0;
    while(n)
    {
        int r = n%10;
        sum = sum + r * a;
        a= a*2;
        n= n/10;
   }
    cout << sum << endl;
}