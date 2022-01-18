#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string input = "";
    while(getline(std::cin, input))
    {
        cout<<input<<'\n';
    }
    return 0;
}