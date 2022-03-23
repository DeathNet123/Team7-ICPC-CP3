#include<iostream>
#include<algorithm>
using namespace std;

int **dp;
int lcs_palindrome(string x, int idx, int kdx)
{
    if(dp[idx][kdx] != -1) return dp[idx][kdx];
    if(idx > kdx)   return 0;
    else if(idx == kdx) 
    {
        dp[idx][kdx] = 1;
        return dp[idx][kdx];
    }
    if(x[idx] == x[kdx])
    {
        dp[idx][kdx] = lcs_palindrome(x, idx + 1, kdx - 1) + 2;
        return dp[idx][kdx];
    }
    dp[idx][kdx] =  max(lcs_palindrome(x, idx +1 , kdx), lcs_palindrome(x, idx, kdx - 1));
    return dp[idx][kdx];
}
int main(void)
{
    string x = "XTRACECARGH";
    dp = new int *[x.length()];
    for(int idx = 0; idx < x.length(); idx++)
    {
        dp[idx] = new int[x.length()];
        for(int kdx = 0; kdx < x.length(); kdx++)
            dp[idx][kdx] = -1;
    }
    cout<<lcs_palindrome(x, 0, x.length()-1)<<endl;
    for(int idx = 0; idx < x.length(); idx++)
    {
        for(int kdx = 0; kdx < x.length(); kdx++)
            cout<<dp[idx][kdx]<<" ";
        cout<<'\n';
    }   
    return 0;
}