#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
vector<int> boys_location(string s)
{
    vector<int> locations;
    for(int idx = 0; idx < (int) s.length(); idx++)
    {
        if(s[idx] == 'B')
            locations.push_back(idx);
    }
    return locations;
}
void rotate_students(vector<int> locations, string &queue)
{
    for(int idx = 0; idx < (int) locations.size(); idx++)
    {
        if(queue[locations[idx] + 1] == 'G')
        {
            queue[locations[idx] + 1] = 'B';
            queue[locations[idx]] = 'G';
        }
    }
}
int main(void)
{
    string queue;
    vector<int> locations;
    int size, rotate;
    cin>>size>>rotate;
    cin>>queue;
    for(int idx = 0; idx < rotate; idx++)
    {
        locations = boys_location(queue);
        rotate_students(locations, queue);
    }
    cout<<queue<<'\n';
    return 0;
}