#include<iostream>
#include<string>

using namespace std;

typedef long long ull;
typedef string ss;
int main(void)
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    ull n;
    cin>>n;
    ss last;
    if(n == 1)
    {
        cout<< 1<<" ";
        return 0;
    }
    else if (n <= 3)
    {
        cout<<"NO SOLUTION\n";
    }

    for(ull idx = 1ull ; idx <= n; idx++)
    {
        if(!(idx & 1))
        {
            cout<<idx<<' ';
        }
        else
            last += to_string(idx) + " ";
    }
    cout<<last;
    return 0;
}