/*Remove adjacent duplicate characters from a string
Given a string, remove adjacent duplicates characters from it. In other words, remove all consecutive same characters except one.*/
#include<iostream>
#include<algorithm>
using namespace std;
string remove_adjacent(int idx, string result, string x)
{
    if(idx == x.length())
        return result;
    if(x[idx] != x[idx - 1 ])
        result = result + x[idx - 1];
    return remove_adjacent(idx+1, result, x);
}
string remove_adjacent(string x)
{
    return remove_adjacent(0, "", x);
}
int main(void)
{
    string s = "AABBBCDDD";
    cout<<remove_adjacent(s);
    return 0;
}