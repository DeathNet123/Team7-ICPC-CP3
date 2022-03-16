/*Maximum Product Subset Problem
Given an integer array, find the maximum product of its elements among all its subsets.

For example,

Input:  nums[] = { -6, 4, -5, 8, -10, 0, 8 }
 
Output: The maximum product of a subset is 15360
 
The subset with the maximum product of its elements is { -6, 4, 8, -10, 8 }
 
Input:  nums[] = { 4, -8, 0, 8 }
 
Output: The maximum product of a subset is 32
 
The subset with the maximum product of its elements is { 4, 8 }*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int maximum_product(int max, vector<int> data, int idx = 0)
{
    if(idx >= data.size()) return max;           
    int max1 = maximum_product(max, data, idx+ 1);
    int max2 = maximum_product(max*data[idx], data, idx+1);
    return max1>max2?max1:max2;
}
int maximum_product(vector<int> data)
{
    int max1 = maximum_product(1, data, 0);
    return max1;
}
int main(void)
{
    vector<int> num { -6, 4, -5, 8, -10, 0, 8};
    cout<<maximum_product(num);
    return 0;
}