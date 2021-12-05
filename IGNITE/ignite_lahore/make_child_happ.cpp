#include <iostream>
#include<algorithm>
using namespace std;

int main(int argc, char** argv)
{
    int data[17] = {1, 12, 5, 111, 200, 1000, 10, 9, 12, 15, 1500, 256, 569, 890, 360, 560, 3000};
    sort(data, data + 17);
    for(int idx = 0; idx < 17; idx++)
    {
        cout<<data[idx]<<' ';
    }
    return 0;
}