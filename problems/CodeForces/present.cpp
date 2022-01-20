#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    int n {0};
    int *friends;
    cin >> n;
    friends = new int[n];
    for(int idx = 0; idx < n; ++idx)
    {
        cin >> friends[idx];
    }
    int *out = new int[n];
    for(int idx = 0; idx < n; ++idx)
    {
        out[friends[idx]-1] = idx+1;
    }
    for(int idx = 0; idx < n; ++idx)
    {
        cout<<out[idx]<<' ';
    }
    return 0;
}