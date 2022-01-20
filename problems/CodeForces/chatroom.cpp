#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(void)
{
    string input;
    cin>>input;
    char req[5] = {'h', 'e', 'l', 'l', 'o'};
    int count = 0; 
    for(char c : input)
    {
        if(c == req[count])
        {
            req[count] = 0;
            count++;
        }
    }
    if(count == 5) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}