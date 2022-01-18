#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    int times {0};
    cin >> times;
    string save[times];
    for(int idx = 0; idx < times; idx++)
    {
        cin>>save[idx];
    }
    for(int idx = 0; idx < times; idx++)
    {
        string temp = save[idx];
        if(temp.length() > 10)
        {
            save[idx] = temp[0] + to_string((int) temp.length() - 2) + temp[temp.length() - 1];
        }
        cout<<save[idx]<<'\n';
    }
    return 0;
}