#include<iostream>
using namespace std;

int main(void)
{
    long long n;
    cin>>n;
    long long sum = (n*(n+1))/2;
    long long actual = 0;
    long long temp = 0;
    for(int idx = 1; idx < n; idx++)
    {
        cin>>temp;
        actual += temp;
    }
    cout<<sum-actual;
    return 0;
}
