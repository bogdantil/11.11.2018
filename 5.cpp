// Напишите программу, заменяющую составные числа на их самые большие
простые делители.
#include <iostream>
using namespace std;
int main() {
int n, div = 2, maxx;
  cout << "N = ";
  cin >> n;
  while (n > 1)
  {
    while (n % div == 0)
    {
      n = n / div;
      maxx=div;
    }
    div++;
      }

cout << "max prime div = "<< maxx << endl;
return 0;
}
