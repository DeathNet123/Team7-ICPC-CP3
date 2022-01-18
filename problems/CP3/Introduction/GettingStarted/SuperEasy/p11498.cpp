#include<iostream>
using namespace std;
int main(void)
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int k, m, n, x, y;
    while(true)
    {
    cin>>k;
    if(k == 0) break;
    cin>>n>>m;
    while(k--)
    {
        cin>>x>>y;
        if(x == n || y == m)
        {
            cout<<"divisa\n";
            continue;
        }
        else if(x > n)
        {
            if(y > m)
                cout<<"NE\n";
            else if(y < m)
                cout<<"SE\n";
            continue;
        }
        else if(x < n)
        {
            if(y > m)
                cout<<"NO\n";
            else if(y < m)
                cout<<"SO\n";
            continue;
        }   
    }
    }
    return 0;
}