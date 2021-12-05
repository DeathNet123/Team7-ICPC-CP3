//Brute Force...
//CP3 first problem the abridge problem..........
#include <iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

class point
{
    private:
        float x, y;
    public:
        point(int x = 0, int y = 0)
        {
            this->x = x;
            this->y = y;
        }

        bool operator == (const point &p)
        {
            if(p.x == this->x && p.y == this->y)
                return true;
            else 
                return false;
        }

        float distance(const point p)
        {
            float dist = sqrt(pow((p.x - this->x), 2) + pow((p.y - this->y), 2));
            return dist;
        }
        
        void set(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
        friend ostream& operator<<(ostream& os, const point& p);

};

ostream& operator<<(ostream& os, const point& p)
{
    os<<"("<<p.x<<","<<p.y<<")";
    return os;
};
class pair_point
{
    private:
        point a, b;
        
    public:
    float dist;
        pair_point(point a, point b)
        {
            this->a = a;
            this->b = b;
            dist = a.distance(b);
        }

        bool operator==(const pair_point& pair)
        {
            if((this->a == pair.a) && (this->b == pair.b))
                return true;
            else if((this->a == pair.b) || (this->b == pair.a))
                return true;
            else return false;
        }

        bool overlap(const pair_point& pair)
        {
            if((this->a == pair.a || this->a == pair.b) || (this->b == pair.a || this->b == pair.b))
                return true;
            else return false;
        }
        friend ostream& operator<<(ostream& os , const pair_point& p)
        {
            os<<"{"<<p.a<<","<<p.b<<"}";
            return os;
        }
};
int main(void)
{
    int n, x, y;
    bool flag = false;
    point p1(6, 8);
    point p2(1,2);
    pair_point pa(p1,p2);
    vector<point> points;
    vector<pair_point> pairs;
    vector<vector<pair_point>> sol;
    vector<pair_point> templ;
    point temp;
    cin>>n;
    for(int idx = 0; idx < n; idx++)
    {
        cin>>x>>y;
        temp.set(x, y);
        points.push_back(temp);
    }

    for(int idx = 0; idx < n-1; idx++)
    {
        for(int kdx = idx+1; kdx < n; kdx++)
        {
            pairs.push_back(pair_point(points[idx], points[kdx]));
        }
    }
    float sizer = pow(2, pairs.size());
    int idx, counter = 0;

    for(; counter < sizer; counter++)
    {
        for(idx = 0; idx < pairs.size(); idx++)
        {
            if(counter & (1 << idx))
                templ.push_back(pairs[idx]);
        }
        if(templ.size() == n/2)
        {
            for(int ldx = 0; ldx < templ.size(); ldx++)
                for(int rdx = ldx + 1; rdx < templ.size(); rdx++)
                {
                    if(templ[ldx].overlap(templ[rdx]))                             //TIME COMPLEXITY IS 2^N :( the worst code i ever wrote.......
                        flag = true;
                }
            if(!flag)
                sol.push_back(templ);
        }
        flag = false;
        templ.clear();
    }
    vector<float> res;
    for(int idx = 0; idx < sol.size(); idx++)
    {
        res.push_back(0);
        for(int kdx = 0; kdx < sol[idx].size(); kdx++)
        {
            res[idx] += sol[idx][kdx].dist;
            cout<<sol[idx][kdx]<<" ";
        }
        cout<<res[idx]<<endl;
    }
    
    cout<<"\nMin: "<<*min_element(res.begin(),res.end())<<endl;
}