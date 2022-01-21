#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool is_not_missing(vector<int> data)
{
    for(int idx = 0; idx < data.size(); idx++)
    {
        if(data[idx] == data[idx -1] || data[idx] == data[idx - 1] + 1)
            continue;
        else return false;
    }
    return true;
}
int main(void)
{
    vector<int> levels;
    int n{0}, p{0}, q{0}, temp{0};
    cin>>n;
    cin>>p;
    for(int idx=0; idx<p; idx++)
    {
        cin>>temp;
        levels.push_back(temp);
    }
    cin>>q;
    for(int idx=0; idx<q; idx++)
    {
        cin>>temp;
        levels.push_back(temp);
    }
    
    sort(levels.begin(), levels.end());
    if(levels[levels.size()-1] == n && is_not_missing(levels))
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}