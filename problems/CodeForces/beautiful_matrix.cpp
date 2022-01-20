#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    int mat[5][5];
    for(int idx = 0; idx < 5; idx++)
    {
        for(int kdx = 0; kdx < 5; kdx++)
        {
            cin>>mat[idx][kdx];
        }
    }
    int x, y;
    for(int idx = 0; idx < 5; idx++)
    {
        for(int kdx = 0; kdx < 5; kdx++)
        {
            if(mat[idx][kdx] == 1)
            {
                x = idx;
                y = kdx;
            }
        }
    }
    cout<<abs(x-3+1)+abs(y-3+1);
    return 0;
}