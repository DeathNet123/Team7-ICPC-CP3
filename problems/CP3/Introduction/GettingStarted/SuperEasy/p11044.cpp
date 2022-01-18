#include<iostream>

using namespace std;

int main(void)
{
    int rows, cols;
    int count;
    cin>>count;
    while(count)
    {
        cin>>rows>>cols;
        cout<<(rows/3) * (cols/3)<<'\n';
        count--;
    }
    return 0;
}