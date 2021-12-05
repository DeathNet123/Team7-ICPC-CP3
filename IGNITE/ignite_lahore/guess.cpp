#include<iostream>

using namespace std;


int guess(int x, int y)
{
    int counter = 0;
    int count = 0;
    if(x > y)
        count = x;
    else
        count = y;
    for(int idx  = 2; idx <= count; idx++)
    {
        if((x % idx == 0) && (y % idx == 0))
        {
            counter++;
        }
    }
    return counter;
}
int main(void)
{
    int temp_1, temp_2;
    cin>>temp_1>>temp_2;
    cout<<guess(temp_1, temp_2);
    return 0;
}