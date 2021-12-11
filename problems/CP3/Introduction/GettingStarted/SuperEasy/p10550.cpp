#include<iostream>
#define MIN 1080 
using namespace std;
int state;
int return_points_c(int points)
{
    int total = 0, temp = 0;
    if(state < points)
        total += 40 - abs(state - points);
    else
        total += abs(state - points);
    state = points;
    return total;
}
int return_points_ac(int points)
{
    int total = 0, temp = 0;
    if(state > points)
        total += 40 - abs(state - points);
    else
        total += abs(state - points);
    state = points;
    return total;
}

int main(void)
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int count;
    cin>>count;
    while(count--){
    int p1, p2, p3, total = 0;
    cin>>state>>p1>>p2>>p3;
    if(p1 == 0 && p2 == 0 && p3 == 0) return 0;
    total += return_points_c(p1);
    total += return_points_ac(p2);
    total += return_points_c(p3);
    total *= 9;
    total += MIN;
    cout<<total<<'\n';  
    }
    return 0;
}