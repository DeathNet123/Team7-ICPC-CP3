#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(void)
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    bool started = false;
    bool flag = false;
    string input = "", output = "", temp = "";
    ifstream file("input.txt" ,ios::in);
    while(getline(file, input))
    {
        if(flag)
            cout<<'\n';
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
        flag = true;
        output = "";     
    }  
    return 0;
}