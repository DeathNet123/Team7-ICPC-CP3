#include<iostream>
#include<algorithm>
#include<string>
#include<regex>
using namespace std;
int main(void)
{
    string input;
    cin>>input;
    regex reg("WUB");
    string news = regex_replace(input, reg, "-");
    regex last("-+");
    string output = regex_replace(news, last, " ");
    char las = output[output.length()-1];
    char first = output[0];
    if(las == ' ')
        cout<<output.substr(0, output.length()-1);
    else if (first == ' ' && las == ' ')
    {
        cout<<output.substr(1, output.length());
    }
    else if(first == ' ')
    {
        cout<<output.substr(1, output.length())<<endl;
    }
    else
    {
        cout<<output<<endl;
    }
    return 0;
}