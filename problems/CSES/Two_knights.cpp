/*
Note that when we have two knights threatening each other, it actually forms either a 2×3 or 3×2 board. And for each of 2×3 and 3×2 boards, there are 2 ways of placing two knights so that they threaten each other. So, what we should do is to count how many 2×3 and 3×2 squares on n×n board. For general n, the answer is
(n−1)(n−2)+(n−2)(n−1)=2(n−1)(n−2)
And for each 2×3 and 3×2 board, there are 2 ways of placing the knights so that they threaten each other. Therefore, in total there are
2⋅2(n−1)(n−2)=4(n−1)(n−2)
ways of placing two knights so that they threaten each other. So what you are looking for is
n^2(n^2−1)/2−4(n−1)(n−2)
It is also worth mentioning that we are not over-counting because whenever we place two knights so that they threaten each other, either a 2×3 or 3×2 board must contain both of the knights.
*/
#include<iostream>
using namespace std;

int main(void)
{
    int k = 0; 
    long long all = 0, attack = 0;
    cin>>k;
    for(long long idx = (long long) 1; idx <= (long long) k; idx++)
    {
        all = idx * idx * ((idx * idx) - 1);
        all /= 2;
        attack = 4 * (idx - 1) * (idx - 2);
        cout<<all-attack<<'\n';
    }
    return 0;
}