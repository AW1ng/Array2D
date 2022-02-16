#include <iostream>
using namespace std;

////Задача 5. Диагональная матрица
//

int main () {
   double a[4][4] = {{12, 12, 12, 23},
                     {1,  24, 4,  56},
                     {4,  56, 7,  45},
                     {34, 46, 75, 22}};


   for (int i = 0; i < 4; ++i) {
       for (int j = i + 1; j < 4; ++j) {
           a[i][j] = 0;
           a[j][i] = 0;
       }
   }

   for (int i = 0; i < 4; ++i) {
       for (int j = 0; j < 4; ++j) {
           cout << a[i][j] << ' ';
       }
       cout << endl;
   }

}
