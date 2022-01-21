#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    int n {0};
    int max_loc {0}, max{0};
    int min_loc {0}, min{0};
    int seconds {0};
    cin>>n;
    int *soliders = new int[n];
    for(int idx = 0; idx < n; idx++)
    {
        cin>>soliders[idx];
    }
    min = soliders[0];
    for(int idx = 0; idx < n; idx++)
    {
        if(soliders[idx] > max)
        {
            max = soliders[idx];
            max_loc = idx;
                
        }
        if(soliders[idx] <= min)
        {
            min = soliders[idx];
            min_loc = idx;
        }
    }
    int count {0};
    if(max_loc > min_loc)
    {
        count += abs(0-max_loc);
        min_loc++;
        count += (--n-min_loc);
        cout<<count<<endl;
    }
    else
    {
        count = (--n-min_loc) + abs(0-max_loc);
        cout<<count<<endl;
    }
    return 0;
}