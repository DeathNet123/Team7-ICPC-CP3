#include<iostream>
using namespace std;

int main(void)
{
    long long answer = 1;
    long long n;
    long long m = 1000000007; 
    cin>>n;
    for(long long idx = (long long)1; idx <= n; idx++)
    {
        answer = (answer * 2) % m;
    }
    cout<<answer % m;
    return 0;
}