#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    int n, m;
    cin>>n>>m;
    bool flag = true;
    vector<string> places;
    while(n != 0 && m != 0)
    {
        if(flag == true)
        {
            places.push_back("Akshat");
            flag = false;
        }
        else
        {
            places.push_back("Malvika");
            flag = true;
        }
        n--;m--;
    }
    cout<<places[places.size()-1];
    return 0;
}