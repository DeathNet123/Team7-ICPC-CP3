#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int main(void)
{
    int n {0};
    int *x, *y, *z;
    cin>>n;
    x = new int[n];
    y = new int[n];
    z = new int[n];
    for(int idx = 0; idx < n; idx++)
    {
        cin>>x[idx]>>y[idx]>>z[idx];
    }
    int sum_x = accumulate(x, x+n, 0);
    int sum_y = accumulate(y, y+n, 0);
    int sum_z = accumulate(z, z+n, 0);
    if(sum_x ==  0 && sum_y == 0 && sum_z == 0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}