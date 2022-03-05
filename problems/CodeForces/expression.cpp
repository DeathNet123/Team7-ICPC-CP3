#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int max(int a, int b)
{
    if(a > b) return a;
    else return b;
}
int max_value(vector<int> values, int s, int e)
{
    if(s == e) return values[s];
    int m0 = 0;
    for(int idx = s; idx < e; idx++)
    {
        int temp = max_value(values, s, idx) * max_value(values , idx + 1, e);
        int temp2 = max_value(values, s, idx) + max_value(values, idx + 1, e);
        int m1 = max(temp, temp2);
        m0 = max(m0, m1);
    }
    return m0;
}
int main(void)
{
    int a, b, c;
    cin>>a>>b>>c;
    vector<int> values{a, b, c};
    cout<<max_value(values, 0, 2);
    return 0;
}