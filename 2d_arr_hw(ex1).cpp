#include <iostream>
using namespace std;

////Урок №1. Знакомство, объявление, индексация и инициализаци
//
////Задача 1. Банкетный стол

//
int main () {

    int table[2][6] = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}};
//    string tableware[10][3] = {{"spoon", "knife", "fork"}, {"spoon", "knife", "fork"}, {"spoon", "knife", "fork"},{"spoon", "knife", "fork"}, {"spoon", "knife", "fork"}, {"spoon", "knife", "fork"}, {"spoon", "knife", "fork"}, {"spoon", "knife", "fork"}, {"spoon", "knife", "fork"}, {"spoon", "knife", "fork"}};
    int tableware[10][3] ={{1, 2, 3}, {1, 2, 3}, {1, 2, 3},{1, 2, 3}, {1, 2, 3}, {1, 2, 3}, {1, 2, 3}, {1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
//    string vip[2][4] = {{"spoon", "dessert spoon", "knife", "fork"}, {"spoon", "dessert spoon", "knife", "fork"}};
    int vip_tableware[2][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}};
    int plates[10][2] = {{1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}};
    int vip_plates[2][3] = {{1, 2, 3}, {1, 2, 3}};
    int chairs[12][1] = {{1}, {1}, {1}, {1}, {1}, {1}, {1}, {1}, {1}, {1}, {1}, {1}};


for (int i = 0; i < 12; i++){
    cout << "Chair#" << i + 1 <<":" ;
    for (int j = 0; j < 1; j++){
        if ( i == 2){
            chairs[i][j] += 1;
        }
        cout << chairs[i][j] << " ";
    }
    cout << endl;
}

    for (int i = 0; i < 10; i++) {
        cout << "Tableware#" << i + 1 <<":";
        for (int j = 0; j < 3; j++) {
            if ( tableware[i][j] == 1 && i == 5){
                tableware[i][j] -= 1;
            }
            cout << tableware[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 10; i++){
        if (i < 2) {
            cout << "Vip tableware:";
        }
        for (int j = 0; j < 4; j++){
            if ( vip_tableware[i][j] == 1 && i == 1){
                vip_tableware[i][j] -= 1;
            }
            if (i < 2){
                cout << vip_tableware[i][j] << " ";
            }
            if ( tableware[i][j] == 0 && i == 5){
                tableware[i][j] += 1; break;
            }

        }
        if (i < 2) {
            cout << endl;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << "Tableware#" << i + 1 <<":";
        for (int j = 0; j < 3; j++) {
            cout << tableware[i][j] << " ";
        }
        cout << endl;
    }


    for (int i = 0; i < 2; i++){
        cout <<"Vip plates:";
        for (int j = 0; j < 3; j++){
            if ( vip_plates[i][j] == 1 && i == 1){
                vip_plates[i][j] -= 1;
            }
            cout << vip_plates[i][j] << " ";
        }
        cout << endl;
    }


}
