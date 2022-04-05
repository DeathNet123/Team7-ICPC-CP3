#include<iostream>
#include<algorithm>
using namespace std;
 
int main(void)
{
    string x;
    cin >> x;
    int count = 0;
    char last = x[0];//make the first element as last
    int max_len = 0;
    for(int idx = 0; idx < x.length(); idx++)//loop through the string
    {
        if(x[idx] == last) //if the element is equal to last then add 1
            count++;
        else
        {
            last = x[idx]; //make the current element as last 
            max_len = std::max(max_len, count);//place the max count in max_len
            count = 1;//reset the count
        }
    }
    max_len = std::max(max_len, count);//this is done for the last max_check
    cout<<max_len;
    return 0;
}