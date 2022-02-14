#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int max(int a, int b, int c)
{
    vector<int> data {a, b, c};
    sort(data.begin(), data.end());
    return data[data.size() - 1];
}
int cross_sum(int mid, int s, int e, vector<int> data)
{
    int max1 = 0, max2 = 0, sum = 0;
    for(int idx = mid; idx >= s; idx--)
    {
        sum+= data[idx];
        if(sum > max1)
            max1 = sum;
    }
    sum = 0;
    for(int idx = mid+1; idx <= e; idx++)
    {
        sum += data[idx];
        if(sum > max2)
            max2 = sum;
    }
    return max1 + max2;
}
int max_array(vector<int> data, int s, int e)
{
    if(s == e) return data[e];
    int mid =   (s+e)/2;
    int max1 = max_array(data, s, mid);
    int max2 = max_array(data, mid+1, e);
    int max3 = cross_sum(mid, s, e, data);
    return max(max1, max2, max3);
}

int main(void)
{
    vector<int> data {2, -4, 1, 9, -6, 7, -3};
    cout<<max_array(data, 0, data.size()-1);
    return 0;
}