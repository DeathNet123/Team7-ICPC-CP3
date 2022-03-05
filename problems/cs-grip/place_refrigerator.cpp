/*You’ve purchased a cool new fridge for your student room, but the delivery company haphazardly dumped it somewhere in the middle of the room. The fridge is pretty heavy, but if you give it a big shove you can just about manage to push it a small distance. Figure out how to move the fridge into place without smashing up your room!
Input Format
The input starts with a line, containing an integer w and h, 1 ≤ w ≤ 256 is the size of your room from east-to-west, 1 ≤ h ≤ 256 is the size of your room from north-to-south, followed by a letter m. Next follow h lines each with w characters, giving a map of your room:
. Open, you can walk on this square or push the fridge there.
! Current location of fridge.
? Target location of fridge.
+ Your current position.
A . . . Z Squares occupied by furniture or walls. The entire first and last lines, together with the first and last letter of every other line, is W (for Wall). The characters +, ! and ? each appear exactly once.
Example Input:
12 12 P
WWWWWWWWWWWW
W...WWWW...W
W...WWWW...W
W..........W
WWW.WWWW.WWW
WWW.WWWW.WWW
WWW.WWWW.WWW
WWW.WWWW.WWW
W..!..W..+?W
W...W...WWWW
W...WWWWWWWW
WWWWWWWWWWWW

Output Format:
The letter m denotes the output mode. Regardless of the mode, the first line of the output is an integer l, denoting the minimum number of steps required to move the fridge into place.
If the mode is P (for Path), the next line describes the l steps required to move the fridge into place using the letters NEWS (North, East, West, South).
It is recommended (for debugging) to implement a mode A (for Animate) in which the successive states of the room map in the solution are printed out.
If there is no solution, only output the text No solution.
Example Output:
68
WWSWWNWWSWWNESENNNNNNWNNESWSEEEEEENEESWNWSSSSSNNNNWWWWWSSSSSEESEENEE*/
#include<iostream>
#include<string>
#include<vector>
#include<utility>
using namespace std;
#define DEBUG
pair<int, int> find_location(vector<vector<char>> map, char key) // find the location of targeted location
{
    for(int idx = 0; idx < (int) map.size(); idx++)
    {
        for(int kdx = 0; kdx < (int) map[idx].size(); kdx++)
        {
            if(map[idx][kdx] == key)
                return make_pair(idx, kdx);
        }
    }
    return make_pair(-1, -1);
}
bool is_path(vector<vector<char>> map, int idx, int kdx, pair <int, int> loc)
{
    #ifdef DEBUG
    cout<<idx<<' '<<kdx<<endl;
    #endif
    if(map[loc.first][loc.second] >= 'A' && map[loc.first][loc.second] <= 'Z') return false; //return true if target_location is wall no need to proceed..
    if(map[idx][kdx] >= 'A' && map[idx][kdx] <= 'Z') return false;
    else if(loc.first == idx && loc.second == kdx) return true;
    map[idx][kdx] = 'W';
    return is_path(map, idx + 1, kdx, loc) || is_path(map, idx - 1, kdx, loc) || is_path(map, idx, kdx + 1, loc) || is_path(map, idx, kdx - 1, loc);
}
void place_refrigerator(vector<vector<char>> map)
{
    pair<int, int> fridge_location = find_location(map, '!');
    pair<int, int> my_location = find_location(map, '+');
}
int main(void)
{
    int w{0}, h{0};
    cin>>w>>h;
    vector<vector<char>> map(h , vector<char>(w));
    char temp = 0;
    for(int idx = 0; idx < h; idx++) 
    {
        for(int kdx = 0; kdx < w; kdx++)
        {
            cin>>temp;
            map[idx][kdx] = temp;
        }
    }
    #ifdef DEBUG
    pair<int , int> result = find_location(map, '!');
    cout<<result.first<<result.second<<endl;
    if(is_path(map, 8, 1, result)) cout << "YES";
    else cout << "NO";
    #endif
    return 0;
}