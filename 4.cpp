#include <iostream>
using namespace std;
int main()
{
    int k,m,x,y;
    cin >> k;
    cin >> m;
    cin >> x;
    cin >> y;
    int kolya = 0;
    int misha = 0;
    if (y < x) return 0;
    for (int i = x; i<=y; i++)
    {
        if(i % k == 0)
        {
            kolya++;
            for(i += k; i <= y; i += k)
            {
                kolya++;
            }
        }
    }
    for(int i = x; i<=y; i++)
    {
        if(i % m == 0)
        {
            misha++;
            for(i += m; i <= y; i += m)
            {
                misha++;
            }
        }
    }
    cout << (kolya - misha);
    return 0;
}