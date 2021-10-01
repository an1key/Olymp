#include <iostream>
using namespace std;
int main()
{
    long n = 0;
    int k;
    cin >> n >> k;
    bool bought[n];
    int result = 0;
    for (int i = 0 ; i < n; i++)
    {
        bought[i] = false;
    }
    for(int i = 0; i < k; i++)
    {
        int mark = 0;
        cin >> mark;
        bought[mark-1] = true;
    }
    for(int i = 0; i < n; i++)
    {
        if(!(bought[i] == 1 && bought[i-1] == 1) || i == 0)
        {
            result++;
        }

    }
    cout << result;
    return 0;
}