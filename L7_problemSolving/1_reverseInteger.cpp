#include <iostream>

using namespace std;
/*
    INT_MIN
    INT_MAX
*/

int reverse(int x)
{
    int ans=0, digit=0;

    while(x!=0)
    {
        digit = x%10;
        ans = ans*10 + digit;
        x = x/10;
    }
    return ans;
}

int main()
{
    int n=0;

    cin >> n;
    cout << reverse(n);
    return 0;
}