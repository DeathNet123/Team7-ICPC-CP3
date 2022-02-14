/*
Find all interleavings of given strings that can be formed from all the characters of the first and second string where the order of characters is preserved.
*/
#include<iostream>
#include<unordered_set>
using namespace std;
void print_interleavings(unordered_set<string> &l, string x, string y, int idx, int kdx, bool flag =false)
{
    if(idx > x.length() || kdx > y.length()) return;
    if(!flag)
    {
        l.insert(x.substr(0, idx) + y + x.substr(idx));
        print_interleavings(l, x, y, idx + 1, 0);
    }
    else
    {
        l.insert(x.substr(0, kdx) + y + x.substr(kdx));
        print_interleavings(l, x, y, 0, kdx + 1, true);
    }
            
}
void print_interleavings(string x, string y)
{
    unordered_set<string> l;
    print_interleavings(l, x, y, 0, 0);
    print_interleavings(l, y, x, 0, 0, true);
    cout<<"-------------------------------------\n";
    for(auto s: l)
        cout<<s << endl;
}
int main(void)
{
    string x = "ABC";
    string y = "ACB";
    print_interleavings(x, y);
    return 0;
}
/*
ACBABC
AACBBC
ABACBC
ABCACB
AABCCB
ACABCB
*/