#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main(void)
{
    int n {0}, h{0}, g{0}, count{0};
    vector<pair<int, int>> team_uniforms;
    pair<int, int> home_team;
    pair<int, int> guest_team;
    cin>>n;
    for(int idx = 0; idx < n; idx++)
    {
        cin>>h>>g;
        team_uniforms.push_back(make_pair(h,g));
    }
    for(int idx = 0; idx < n; idx++)
    {
        home_team = team_uniforms[idx];
        for(int kdx = 0; kdx < n; kdx++)
        {
            guest_team = team_uniforms[kdx];
            if(idx != kdx)
            {
                if(home_team.first == guest_team.second)
                    count++;
            }
        }
    }
    cout<<count;
    return 0;
}