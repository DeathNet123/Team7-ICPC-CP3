#include<iostream>

using namespace std;

int main(void)
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int count = 0, a, b;
    cin>>count;
    while(count--)
    {
        cin>>a>>b;
        if(a > b)
            cout<<'>'<<'\n';
        else if(a < b)
            cout<<'<'<<'\n';
        else
            cout<<'='<<'\n';
    }
    return 0;
}