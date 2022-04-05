#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long n{138367};
    cin>>n;
    while(n != 1)
    {
        cout << n<<" ";
        if(n % 2 == 0)
        {
            n /= 2;
            continue;
        }
        else
        {
            n *= 3;
            n += 1;
        }
    }
    cout<<n;
    return 0;
}