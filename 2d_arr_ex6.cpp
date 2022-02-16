//#include <iostream>
//using namespace std;
//
//// Created by Alex on 17.08.2021.
//
////Задача 6. Умножение матрицы на вектор
////
//// Реализуйте частный случай умножения матрицы на матрицу,
//// а именно — умножение вектора на матрицу.
//// Данная операция также весьма распространена в компьютерной индустрии
//// в целом и в компьютерное графике в частности, поэтому это будет хорошим упражнением.
////
////Итак, у нас есть 4-х компонентный вектор V представленный с помощью массива,
//// и матрица M размером 4х4, представленная в виде двумерного массива.
//// Их произведением будет новый 4-х компонентный вектор R.
//// Его компоненты будут суммой произведений компонент вектора V на строку матрицы M.
//// Индекс столбца при этом равен индексу соответствующей компоненты вектора R,
//// который мы и рассчитываем в текущий момент времени.
////
////Все входные данные, матрица M и вектор V вносятся из пользовательского ввода.
//// Итоговый вектор R надо вывести в консоль (std::cout).
//// Тип данных элементов - всегда float.
//// Желательно реализовать этот алгоритм с помощью вложенного цикла на умножение колонки.
//
//
//
//int main() {
//    float product = 0;
//
//    float a[4][4];
//
////    float a[4][4] = {{12, 12, 12, 23},
////                      {1,  24, 4,  56},
////                      {4,  56, 7,  45},
////                      {34, 46, 75, 22}};
//
////    float v[4] {1, 2, 3, 4};
//
//    float v[4];
//    float r[4];
//
//    cout << "Enter matrix:\n";
//
//    for (int i = 0; i < 4; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            cin >> a[i][j];
//        }
//    }
//    cout << "Enter vector:\n";
//
//    for (int i = 0; i < 4; i++) {
//        cin >> v[i];
//    }
//
//    for (int i = 0; i < 4; ++i){
//        for (int j = 0; j < 4; ++j){
//
//            product += a[i][j] * v[j];
//        }
//        r[i] = product;
//        product = 0;
//    }
//
//    for (int i = 0; i < 4; i++){
//        cout << r[i] << " \n";
//    }
//
//
//}