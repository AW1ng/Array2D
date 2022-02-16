#include <iostream>
using namespace std;

////Задача 6. Умножение матрицы на вектор
////

int main() {
   float product = 0;

   float a[4][4];

//    float a[4][4] = {{12, 12, 12, 23},
//                      {1,  24, 4,  56},
//                      {4,  56, 7,  45},
//                      {34, 46, 75, 22}};

//    float v[4] {1, 2, 3, 4};

   float v[4];
   float r[4];

   cout << "Enter matrix:\n";

   for (int i = 0; i < 4; ++i) {
       for (int j = 0; j < 4; ++j) {
           cin >> a[i][j];
       }
   }
   cout << "Enter vector:\n";

   for (int i = 0; i < 4; i++) {
       cin >> v[i];
   }

   for (int i = 0; i < 4; ++i){
       for (int j = 0; j < 4; ++j){

           product += a[i][j] * v[j];
       }
       r[i] = product;
       product = 0;
   }

   for (int i = 0; i < 4; i++){
       cout << r[i] << " \n";
   }

}
