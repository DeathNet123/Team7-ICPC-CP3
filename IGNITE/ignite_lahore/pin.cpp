#include <iostream>
#include<cstdlib>
#include <vector>
#include <algorithm>


using namespace std;

vector<int> searchs(int key, int *array)
{
    vector<int> fast;
    int temp1, temp2;
    bool flag = false;
    for(int idx = 0; idx < 19; idx++)
    {
        for(int kdx = 0; kdx < 19; kdx++)
        {
            if((array[kdx]  + array[idx] == key) && (idx != kdx))
            {   
                temp1 = array[kdx];
                temp2 = array[idx];
                flag = true;
                if(temp1 < 10)
                    temp1 *= 10;
                if(temp2 < 10)
                    temp2 *= 10;
                break;       
            }
        }
    }
    if(!flag) return fast;
   while(temp1 >= 1)
    {
        fast.push_back(temp1 % 10);
        temp1 = temp1 / 10;
    }

    while(temp2 >= 1)
    {
        fast.push_back(temp2 % 10);
        temp2 = temp2 / 10;
    }
    sort(fast.begin(), fast.end());
    return fast;  
}

int main(void)
{
    int input;
    int evaluation_array[19] = {20,25,56,98,55,47,59,53,60,12,5,6,23,31,9,7,23,29,69};
    cin>> input;
    vector<int> cake = searchs(input, evaluation_array);
    if(cake.size() == 0)
    {
        cout<<"try_different_pin";
        return 0;
    }
    for(int idx = 0;  idx < cake.size(); idx++)
    {
        cout<<cake[idx];
    }
    return 0;
}