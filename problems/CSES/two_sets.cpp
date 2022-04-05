#include<iostream>
#include<deque>

using namespace std;
typedef long long ll;
void output(deque<ll> set1, deque<ll> set2)
{
    cout<<"YES\n";
    cout<<set1.size()<<"\n";
    for(auto idx = set1.begin(); idx != set1.end(); ++idx)
    {
        cout<<*idx<<" ";
    }
    cout<<"\n"<<set2.size()<<"\n";
    for(auto idx = set2.begin(); idx != set2.end(); ++idx)
    {
        cout<<*idx<<" ";
    }

}
int main(void)
{
    deque<ll> set1, set2;
    ll n {0};
    cin>>n;
    ll flag = n * (n + 1) >> 1;
    if(!(flag & 1))
    {
        set1.push_back(n);
        ll total = (n)* (n - 1) >> 1;
        ll diff = total - n;
        if(diff == 0)
        {
            for(ll idx = 1; idx <= n -1; ++idx)
            {
                set2.push_back(idx);
            }
        }
        if(diff && diff > 0)
        {
            diff >>= 1;
            ll sum = 0;
            for(ll idx = n-1; idx >= 1; --idx)
            {
                if((sum + idx) <= diff)
                {
                    sum += idx;
                    set1.push_front(idx);
                }
                else
                    set2.push_front(idx);
            }
        }
        output(set1, set2);
    }   
    else
        cout<<"NO";
    return 0;
}