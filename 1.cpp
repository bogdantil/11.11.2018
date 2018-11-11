#include <iostream>

using namespace std;

int main()
{
    int ans;
    int x = 1;
    int y;
    cin >> y;
    int T = y;
    if (y == 0)
    {
         ans = 0;
    }
    while ( (y/10) != 0) {
        y = y/10;
        x++;
    }
    while(x != 0){
    int f = (T % 10);
        if ((f%2)!= 0) {
        ans = ans + f;
        }
    T = T / 10;
    x= x-1;
    }
cout << ans;
    return 0;
}
