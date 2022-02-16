//
//#include <iostream>
//using namespace std;
//
//// Created by Alex on 13.08.2021.
////
//
////Задача 3. Проход змейкой
////
//// Довольно абстрактная, но интересная задача.
//// У нас есть двумерный массив целых чисел размером 5 на 5 элементов.
//// Его надо инициализировать и отобразить на экране.
//// Особенность именно в способе этой инициализации.
//// Элементы должны быть инициализированы не последовательно, а змейкой.
//// Т.е. в конце каждой строки мы не должны переходить к
//// первому элементу следующей строки, но начнём наоборот — с последнего элемента и так далее.
//// В итоге, в конечном отображении нашего массива числа
//// должны быть упорядочены по возрастанию но змеевидно от строки к строке.
//// Сама же последовательность чисел — это простое линейное возрастание от 0 до 24,
//// для её учёта можно завести отдельную переменную.
////
//// Попытайтесь решить эту задачу, используя минимальное количество
//// временных переменных и без условных переходов if.
//// Если вы найдёте эту самую формулу индексации — будет замечательно!
//// Предупреждаю, она может быть весьма витиеватая.
////
////
////
////Итоговый результат:
////
////0 1 2 3 4
////
////9 8 7 6 5
////
////10 11 12 13 14
////
////19 18 17 16 15
////
////20 21 22 23 24
//
//int reverse (int n){
//    int c = 0;
//
//    while (n){
//        c = c * 10 + n % 10;
//        n /= 10;
//    }
//
//    return c;
//}
//
//
//
//int main () {
//    int a[5][5];
//    int re, temp = 0;
//
//    int ind, c = 0 , i, j = 0;
//
//    for ( i = 0; i < 5; i++ ) {
//        for ( j = 0; j < 5; j++ ) {
//            ind = a[i][j] = c;
//            temp = j;
//            c++;
//
//        }
//    }
//
//    for (int k = 0; k < 5 ; ++k) {
//        re = a[0][k];
//        cout << re << " ";
//    }
//
//    cout << "\n";
//
//    for (int k = temp; k >= 0 ; --k) {
//        re = a[1][k];
//        cout << re << " ";
//    }
//
//    cout << "\n";
//
//    for (int k = 0; k < 5 ; ++k) {
//        re = a[2][k];
//        cout << re << " ";
//    }
//
//    cout << "\n";
//
//    for (int k = temp; k >= 0 ; --k) {
//        re = a[3][k];
//        cout << re << " ";
//    }
//
//    cout << "\n";
//
//    for (int k = 0; k < 5 ; ++k) {
//        re = a[4][k];
//        cout << re << " ";
//    }
//
//}