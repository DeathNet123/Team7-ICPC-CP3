#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    vector<int> vec;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int count = 0, temp = 0;
    cin>>count;
    int idx = 1;
    while(count--)
    {
        cin>>temp;
        vec.push_back(temp);
        cin>>temp;
        vec.push_back(temp);
        cin>>temp;
        vec.push_back(temp);
        sort(vec.begin(),vec.end());
        cout<<"Case "<<idx<<": "<<vec[1]<<'\n';
        idx++;
        vec.clear();
    }
    return 0;
}