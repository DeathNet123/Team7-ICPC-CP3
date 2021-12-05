#include<iostream>
#include<ctime>
#define SIZE 10
using namespace std;


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void show(int *arr)
{
    for(int idx = 0; idx < SIZE; idx++)
    {
        cout<<arr[idx]<<' ';
    }
    cout<<'\n';
}
int main(void)
{
    srand(time(0));
    int *data = new int [SIZE];
    for(int idx = 0; idx < SIZE; idx++)
    {
        data[idx] = rand() % 99;
    }
    show(data);
    for(int idx = 0; idx < SIZE; idx++)
    {
        int min = idx;
        for(int kdx = min + 1; kdx < SIZE; kdx++)
        {
            if(data[kdx] < data[min])
                min = kdx;
        }
        swap(data[min], data[idx]);
    }
    show(data);
    return 0;
}