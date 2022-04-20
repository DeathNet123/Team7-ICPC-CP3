#include<iostream>
#include<algorithm>
using namespace std;

int knapsack(int n, int *wts, int *price, int wt)
{
    int dp[n + 1][wt + 1];
    for(int idx = 0; idx < n + 1; ++idx)
    {
        dp[idx][0] = 0;
    }
    for(int kdx = 1; kdx < wt + 1; ++kdx)
    {
        dp[0][kdx] = 0;
    }
    for(int idx = 1; idx < n + 1; ++idx)
    {
        for(int kdx = 1; kdx < wt + 1; ++kdx)
        {
            if(wts[idx - 1] > kdx) dp[idx][kdx] = dp[idx - 1][kdx];
            else dp[idx][kdx] = max(dp[idx - 1][kdx], dp[idx-1][kdx - wts[idx - 1]] + price[idx - 1]);
        }
    }
    for(int idx = 0; idx < n + 1; ++idx)
    {
        for(int kdx = 0; kdx < wt + 1; ++kdx)
        {
            printf("%5d", dp[idx][kdx]);
        }
        cout<<"\n";
    }
    return dp[n][wt];
}
int main(void)
{
    int v[] = { 20, 5, 10, 40, 15, 25 };
    int w[] = { 1, 2, 3, 8, 7, 4 };
    int W = 10;
    cout<<knapsack(6, w, v, W);
    return 0;
}