
#include <iostream>
using namespace std;

////Задача 3. Проход змейкой
////
//
int reverse (int n){
   int c = 0;

   while (n){
       c = c * 10 + n % 10;
       n /= 10;
   }

   return c;
}



int main () {
   int a[5][5];
   int re, temp = 0;

   int ind, c = 0 , i, j = 0;

   for ( i = 0; i < 5; i++ ) {
       for ( j = 0; j < 5; j++ ) {
           ind = a[i][j] = c;
           temp = j;
           c++;

       }
   }

   for (int k = 0; k < 5 ; ++k) {
       re = a[0][k];
       cout << re << " ";
   }

   cout << "\n";

   for (int k = temp; k >= 0 ; --k) {
       re = a[1][k];
       cout << re << " ";
   }

   cout << "\n";

   for (int k = 0; k < 5 ; ++k) {
       re = a[2][k];
       cout << re << " ";
   }

   cout << "\n";

   for (int k = temp; k >= 0 ; --k) {
       re = a[3][k];
       cout << re << " ";
   }

   cout << "\n";

   for (int k = 0; k < 5 ; ++k) {
       re = a[4][k];
       cout << re << " ";
   }

}
