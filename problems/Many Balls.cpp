/*We have empty box and we need N number of balls in box by using only two kind of spells
  A: Add one ball in box 
  B: Double the amount of ball in box

  The spells can be used only 120 times

  Provide the way how should be the spell should be performed to get exact N balls in the box

  example
  5

   ABBA


  Long n;
  cin >> n;
  vector<int> a;
  while (n) 
  {
    a.push_back(n % 2);
    n /= 2;
  }
  reverse(a.begin(), a.end());
  for (auto x : a) {
    if (x) cout << "BA";
    else cout <<'B';
*/

#include <iostream>
#include <string>
using namespace std;
 
int main(void) 
{
    long long n;
    cin >> n;
    std::string str("");
    
    while(n > 0) 
    {
        if(n % 2 == 0) 
        {
            str = "B" + str;
            n = n / 2;
        }
        else {
            str = "A" + str;
            n = n - 1;
        }
    }
    
 
    cout << str << endl;

    return 0;
}