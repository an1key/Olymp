#include <iostream>
using namespace std;
int main()
{
    long n = 0;
    cin >> n;
    unsigned long long s = n * (n + 1) + 2 * n + 1;
    cout << s << endl;
    return 0;
}