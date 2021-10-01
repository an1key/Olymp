#include <iostream>
using namespace std;

int main()
{
    int p1, n1, t1, p2, n2, t2, res1, res2;
    cin >> p1 >> n1 >> t1;
    cin >> p2 >> n2 >> t2;

    res1 = p1 + n1 * t1;
    res2 = p2 + n2 * t2;

    if(res1 <= res2)
    {
        cout << "1 " << res1;
    }
    else{
        cout << "2 " << res2;
    }
    return 0;
}