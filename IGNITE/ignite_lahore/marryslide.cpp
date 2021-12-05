#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool search(int key, vector<long long> array)
{
    if(array.size() == 0)
        return false;
    for(int idx = 0; idx < array.size(); idx++)
    {
        if(array[idx] == key)
            return true;
    }
    return false;
}
void marryslide(long long chase, vector<long long> array)
{
    bool flag = false;
    long long counter = 0;
    long long count = 1;
    counter = chase;
    while(true)
    {
      if(counter % 2 == 0)
      {
          counter = counter / 2;
            if(search(counter, array))
                flag = true;
            else
            {
                    array.push_back(counter);
                count++;
            }
                
      }
      else
      {
          counter = (counter * 3) + 1;
                
          if(search(counter, array))
                flag = true;
            else
            {
                array.push_back(counter);
                count++;
            }
      }
      cout<<counter<<' ';
      if(flag)
        break;
            
    }
    cout<<'\n'<<count;
}
int main(void)
{
    vector<long long> array;
    long long chase;
    cin>>chase;
    marryslide(chase, array);
    return 0;
}
