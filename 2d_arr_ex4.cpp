#include <iostream>
using namespace std;
//

////Задача 4. Равенство матриц
//

void equal_check(int a[4][4], int b[4][4]){
   int check = 0;

   for (int i = 0; i < 4; ++i) {
       for (int j = 0; j < 4; ++j) {
           if (a[i][j] == b[i][j]){
               ++check;
           }
       }

   }

   if (check < 16) {
       cout << "Not equal!";
   }
   else cout << "Equal";


}


int main () {
   int a[4][4] = {{1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1} };
   int b[4][4] = {{1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1} };;

   equal_check(a,b);

}
