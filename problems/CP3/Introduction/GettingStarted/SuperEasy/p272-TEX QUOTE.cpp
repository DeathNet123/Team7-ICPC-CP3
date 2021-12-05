#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(void)
{
    bool started = false;
    string input = "", output = "", temp = "";
    ifstream file("input.txt" ,ios::in);
    while(getline(file, input))
    {
       for(int idx = 0; idx < input.length(); idx++)
        {
            temp = input[idx];
            if(!started && temp == "\"")
            {
                temp = "``";
                started = true;
            }
            else if(started && temp == "\"")
            {
                temp = "\'";
                temp += "\'";
                started = false;
            }
            output += temp;
        }
        cout<<output;
        output = "";     
    }  
    return 0;
}