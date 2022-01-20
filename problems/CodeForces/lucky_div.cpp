#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
bool is_lucky(int number = 0)
{
    string temp = to_string(number);
    for(char c : temp)
    {
        if(c == '4' || c == '7') continue;
        else return false;
    }
    return true;
}
bool is_almost_lucky(int number = 0)
{
    for(int idx = 0; idx < number; idx++)
    {
        if(is_lucky(idx))
            if(number % idx == 0) return true;
    }
    return false;
}
int main(void)
{
    int number {0};
    cin>>number;
    if(is_lucky(number))
        cout<<"YES";
    else if(is_almost_lucky(number))
        cout<<"YES";
    else cout<<"NO";
    return 0;
}