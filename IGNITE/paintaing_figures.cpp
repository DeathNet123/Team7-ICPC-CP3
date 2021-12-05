#include <iostream>
#include <cmath>
#include<vector>

using namespace std;


void show(vector<vector<int>>data)
{
    for(int idx = 0; idx < data.size(); idx++)
    {
        for(int kdx = 0; kdx < 5; kdx++)
        {
            cout<<data[idx][kdx]<<' ';
        }
        cout<<'\n';
    }
}
int main(void)
{
    int n;
    cin>>n;
    vector<vector<int>>data(n);
    float *distance = new float[n];
    for(int idx = 0; idx < n; idx++)
    {
        for(int kdx = 0; kdx < 5; kdx++)
        {
            int temp;
            cin>>temp;
            data[idx].push_back(temp);
        }    
    }

    int max = data[0][4];
    for(int idx = 0; idx < n; idx++)
    {
        if(data[idx][4] > max)
            max = data[idx][4];
        int x = data[idx][1] - data[idx][0];
        int y = data[idx][3] - data[idx][2];
        distance[idx] = sqrt(x*x + y*y) + data[idx][4];
    }

    double garbage = 1;
    for(int idx = 0; idx < n; idx++)
    {
        garbage *= distance[idx];
    }
    double area = (M_PI * (max * max)) + garbage - ((garbage - M_PI * (max * max))/garbage);
    cout<<area;
    
    return 0;
}