#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int** LCS(string x, string y)
{
    int **dp = new int *[x.length()+1];
    for(int idx = 0; idx < x.length()+1; idx++)
    {
        dp[idx] = new int[y.length()+1];
        for(int kdx = 0; kdx < y.length()+1; kdx++)
        {
            dp[idx][kdx] = 0;
        }
    }
    for(int idx = 1; idx <= x.length(); idx++)
    {
        for(int kdx = 1; kdx <= y.length(); kdx++)
        {
            if(x[idx-1] == y[kdx-1]) dp[idx][kdx] = dp[idx-1][kdx-1] + 1;
            else
            {
                dp[idx][kdx] = max(dp[idx-1][kdx], dp[idx][kdx-1]);
            }
        }
    }
    for(int idx = 0; idx <= x.length(); idx++)
    {
        for(int kdx = 0; kdx <= y.length(); kdx++)
        {
            cout<<dp[idx][kdx]<<" ";
        }
        cout<<"\n";
    }
    return dp;
}
int main(void)
{
    string x = "AABACL";
    string y = "AAABCV";
    LCS(x, y);
    return 0;
}