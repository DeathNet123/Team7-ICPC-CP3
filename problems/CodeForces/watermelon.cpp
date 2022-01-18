#include<iostream>
#include<vector>
using namespace std;

bool check(int w)
{
    vector<int>combo;
    for(int idx = 1; idx < w; idx++) 
    {
        if(idx % 2 == 0)
            combo.push_back(idx);
    }
    for(int idx = 0; idx < combo.size(); idx++)
    {
        for(int kdx = idx + 1; kdx < combo.size(); kdx++)
        {
            if(combo[kdx] + combo[idx] == w)
                return true;
        }
    }
    return false;
}
int main(void)
{
    int w {0};
    cin>>w;
    if(w % 2 == 0 && w > 2)
        cout<<"YES";
    else if(check(w))
        cout<<"YES";
    else
        cout<<"NO";
}