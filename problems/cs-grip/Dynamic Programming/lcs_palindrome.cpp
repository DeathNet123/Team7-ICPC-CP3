//not completed yet..
#include<iostream>
#include<algorithm>
using namespace std;

int**lcs_palindrome(string x)
{
    int i{0}, j{0};
    int **dp = new int*[x.size() + 1];
    for(int idx = 0; idx < x.size() + 1; idx++)
    {
        dp[idx] = new int[x.size() + 1];
        for(int kdx = 0; kdx < x.size() + 1; kdx++)
            dp[idx][kdx] = 0;
    }
    
}
int main(void)
{
    
    return 0;
}