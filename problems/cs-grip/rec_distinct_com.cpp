/*Find all distinct combinations of a given length with repetition allowed
Given an integer array, find all distinct combinations of a given length k, where the repetition of elements is allowed.*/
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;

void combinations(int k, vector<int> values, string pattern, unordered_set<string> &stores,int idx = 0)
{
    if(idx == k)
    {
        string temp = pattern;
        sort(pattern.begin(), pattern.end());
        if(stores.find(pattern) == stores.end())
        {
            cout<<temp << endl;
            stores.insert(pattern);
        }
        return;
    }
    for(int kdx = 0; kdx < (int) values.size(); kdx++)
        combinations(k, values, pattern + to_string(values[kdx]) + ' ', stores, idx+1);
}
int main(void)
{
    vector<int> values {1, 2, 1};
    unordered_set<string> additional_spaces;
    int k {2};
    combinations(k, values, "", additional_spaces);
    return 0;
}