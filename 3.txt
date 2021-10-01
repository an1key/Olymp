#include <iostream>
using namespace std;
int main()
{
    int nabor[10];
    int result;
    for(int i = 0; i < 10; i++)
    {
        cin >> nabor[i];
    }
    for(int i = 9; i >= 0; i--)
    {
        while(nabor[i] > 0)
        {
            cout << i;
            nabor[i]--;
            for(int k = i -1; k >= 0; k--)
            {
                if(nabor[k] > 0)
                {
                    cout << k;
                    nabor[k]--;
                }
                break;
            }
        }
    }
    cout << endl;
    return 0;
}