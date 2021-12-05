
#include<iostream>
#include<vector>
using namespace std;

int search(int key, vector<int> array)
{
    if(array.size() == 0)
        return false;
    for(int idx = 0; idx < array.size(); idx++)
    {
        if(array[idx] == key)
            return idx;
    }
    return -1;
}

int return_sum(int key, vector <vector<int>> array)
{
    for(int idx = 0; idx < array.size(); idx++)
    {
        cout<< search()
    }
    return 0;
}
int main(void)
{
    vector <vector<int>> array {{22,    13,      2,       8,       30},
  {14,    21,      18,      25,      27},
  {7,     4,       10,      3 ,      15},
  {5,     17 ,     12,      11,      16},
  {23,    6,       1,       9,       24}};


    return 0;
}
