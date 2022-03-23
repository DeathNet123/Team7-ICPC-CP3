#include<iostream>
#include<algorithm>
using namespace std;

int ** LCSUB(string x, string y)
{
    int max_len = 0;
    int ending = 0;
    int **dp = new int *[x.size() + 1];
    for(int idx = 0; idx < x.size() + 1; idx++)
    {
        dp[idx] = new int[y.size() + 1];
        for(int kdx = 0; kdx < y.size() + 1; kdx++)
        {
            dp[idx][kdx] = 0;
        }
    }
    for(int idx = 1; idx < x.size() + 1; idx++)
    {
        for(int kdx = 1; kdx < y.size() + 1; kdx++)
        {
            if(x[idx - 1] == y[kdx - 1])
            {
                dp[idx][kdx] = dp[idx - 1][kdx - 1] + 1;
                if(dp[idx][kdx] > max_len)
                {
                    max_len = dp[idx][kdx];
                    ending = idx;
                }
                    
            } 
            else    dp[idx][kdx] = 0;
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
    cout<<x.substr(ending - max_len, max_len);
    return dp;
}
int main(void)
{
    string x = "ABABCALEVE", y = "BABCAL";
    LCSUB(x, y);   
    return 0;
}