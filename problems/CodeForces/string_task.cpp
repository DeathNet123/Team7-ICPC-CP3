#include<iostream>
#include<string>
using namespace std;

bool if_exist(char value)
{
    char vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    for(int idx = 0; idx < 6; idx++)
    {
        if(value == vowels[idx])
            return true;
    }
    return false;
}

int main(void)
{
    
    string input;
    string output = "";
    getline(std::cin, input);
    for (char c : input)
    {

        char temp = tolower(c);
        if(if_exist(temp))
            continue;
        output = output + "." + temp;
    }
    cout<<output<<endl;
    return 0;
}