//Напишите программу, вычисляющую произведение цифр целого числа, чётность
которых совпадает с чётностью последней цифры.

#include <iostream>


using namespace std;

double bi(int n, int k){
    double ans;
int x, y, g;
y = n;
   for (int i = 1; i!=n; i++)
   {
       y = i * y;
   }

 x=k;
    for (int i = 1; i!=k; i++)
   {
       x = i * x;
   }

 g=(n-k);
    for (int i = 1; i!=(n-k); i++)
   {
       g = i * g;
   }

ans = y/(x*g);
return ans;
}
int main()
{
    double u;
    int x =9, y=2;
   x = bi(x,y);
   cout<<x;
}
