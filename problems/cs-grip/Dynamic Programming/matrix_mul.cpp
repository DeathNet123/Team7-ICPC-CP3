#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print(int **cut, int i, int j, string matrix)
{
    if (i == j)
        cout<<matrix[i-1];
    else
    {
        cout<<"(";
        print(cut, i, cut[i][j], matrix);
        print(cut, cut[i][j] + 1, j, matrix);
        cout<<")";
    } 
}
void matrix_mul(int *dimensions, int n, string matrix)
{
    
    int **cut = new int*[n];
    for(int kdx = 0; kdx < n; kdx++)
    {
        cut[kdx] = new int[n];
    }
    int **dp = new int*[n + 1];
    for(int idx = 0; idx < n+1; ++idx)
        dp[idx] = new int[n + 1];
    for(int l = 2; l <= n; ++l)
    {
        for(int idx = 1; idx <= n - l + 1; ++idx)
        {
            int kdx = idx + l - 1;
            dp[idx][kdx] = 99999;
            for(int k = idx; k <= kdx - 1; ++k)
            {
                int q = dp[idx][k] + dp[k+1][kdx] + dimensions[idx-1]*dimensions[kdx]*dimensions[k];
                if(q < dp[idx][kdx])
                {
                    dp[idx][kdx] = q;
                    cut[idx][kdx] = k;
                }
                    
            }
        }
    }
    cout<<dp[1][6]<<endl;
    print(cut, 1, 6, matrix);
}


int main(void)
{
    string matrix = "ABCDEF";
    int dimen[7] = {30, 35, 15, 5, 10, 20, 25};
    matrix_mul(dimen, 6, matrix);
    return 0;
}
