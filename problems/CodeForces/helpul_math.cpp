#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    string cake;
    cin>>cake;
    sort(cake.begin(), cake.end());
    string out = "";
    for(char c :cake)
    {
        if(c != '+')
            out = out + "+" + c;
    }
    cout<<out.substr(1, out.length() - 1);
    return 0;
}