#include<iostream>
using namespace std;

int main(void) 
{
    int n; 
    long long count = 0, temp;
    cin>>n;
    long long * array = new long long[n];
    for(int idx = 0; idx < n; ++idx)
    {
        cin>>array[idx];
    }
    for(int kdx = 0; kdx < n-1; ++kdx)
    {
        if(array[kdx] > array[kdx+1])
        {
            temp = array[kdx] - array[kdx+1];
            count += temp;
            array[kdx+1] += temp;
        }
    }
    cout<<count<<endl;
    return 0;
}