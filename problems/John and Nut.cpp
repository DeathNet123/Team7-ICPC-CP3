/* John and NUT */
#include<iostream>
using namespace std;

int main(void)
{
  int n, k, x, *a, *b;
  cin>>n>>x;
  a = new int[n];
  for(int idx = 0; idx < n; idx++)
    cin>>a[idx];
  cin>>k;
  b = new int[k];
  for(int idx = 0; idx < k; idx++)
    cin>>b[idx];

  for(int idx = 0; idx < k; idx++)
  {
    x = x - a[b[idx] - 1];
  }
  cout<<'\n'<<x+1;
  return 0;
}
