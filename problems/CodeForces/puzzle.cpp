#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    vector<int> puzzles;
    int n, m, temp;
    cin>>n>>m;
    while ( m > 0)
    {
        cin>>temp;
        puzzles.push_back(temp);
        m--;
    }
    int best = 99999;
    sort(puzzles.begin(), puzzles.end());
    for(int idx = 0; idx < m-n; idx++)
    {
        if(best > puzzles[idx+(n-1)]-puzzles[idx]) best = puzzles[idx+(n-1)]-puzzles[idx];
    }
    cout<<best;
    return 0;
}