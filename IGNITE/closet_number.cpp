#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void show(vector<int>arr)
{
    for(auto idx : arr)
    {
        cout<<idx<<' ';
    }
}

vector<int> closetNumber(vector<int>data)
{

    vector<int> ret_array;
    int n = data.size();
    sort(data.begin(), data.end());
    

    int min = data[1] - data[0];

    for(int idx = 0; idx < n-1; idx++)
    {
        int temp = idx;
        if(data[idx+1] - data[idx] < min)
        {
            min = data[idx+1] - data[idx];
        }        
    }

    for(int idx = 0; idx < n-1; idx++)
    {
        if(data[idx + 1] - data[idx] == min)
        {
            ret_array.push_back(data[idx]);
            ret_array.push_back(data[idx+1]);
        }
    }
    return ret_array;
}
int main(void)
{
    int n;
    vector<int>data;
    
    cin>>n;
    for(int idx = 0; idx < n; idx++)
    {
        int temp;
        cin>>temp;
        data.push_back(temp);
    }    
    data = closetNumber(data);
    show(data);
    return 0;
}