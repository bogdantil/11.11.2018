//Напишите программу, находящую сумму простых элементов массива
#include <iostream>
#include <vector>
using namespace std;
int prime(int a){
    cin >> a;
    if (a==1 || a==0) {return 0;}
else {for (int k = 2 ; k < a ; k++) {
    if (a%k==0) {return 0;}
else {return a ; }
}
}

}
int main (){
    int n;
    cin >> n;
    vector <int> input;
for (int i = 0; i < n; i++) {
  int x;
cin >> x;
if (prime(x)!= 0){
    input.push_back(x);
}
}
for (int i = 0 ; i <= input.size() ; i++ ){
      cout << input[i]++ ;
}

 return 0;
}
