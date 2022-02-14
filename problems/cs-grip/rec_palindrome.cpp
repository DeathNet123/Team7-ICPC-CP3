//Determine weather the string is palindrome or not...
#include<iostream>
using namespace std;
#define DEBUG

bool palindrome(string x, int idx, int kdx)
{
    if(idx == kdx)
        return true;
    if(x[idx] != x[kdx]) return false;
    return palindrome(x, idx + 1, kdx - 1);
    
}
int main(void)
{
    string s = "LOL";
    #if !defined(DEBUG)
    cin >> s;
    #endif
    cout<<palindrome(s, 0, s.length()-1)<<endl;
    return 0;
}