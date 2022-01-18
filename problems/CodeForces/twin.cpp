#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
int main(void)
{
    vector<int>data;
    int kdx {0};
    cin>>kdx;
    int temp = 0;
    for(int idx = 0; idx < kdx; idx++)
    {   
        cin>>temp;
        data.push_back(temp);
    }
    sort(data.begin(), data.end(), greater<int>());
    int count = 0;
    int my_sum = 0;
    int remaining = 0;
    for(int idx = 0; idx < kdx; idx++)
    {
        my_sum += data[idx];
        count++;
        remaining = accumulate(data.begin()+idx+1, data.end(), 0);
        if(my_sum > remaining)
            break;
    }
    cout<<count<<'\n';
    return 0;
}