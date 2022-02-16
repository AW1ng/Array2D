//#include <iostream>
//using namespace std;
//
//
////int bin_search (int a[], int high, int key){
////    int low = 0, mid = 0;
////    int val = 0;
////    while (low <= high){
////        mid = (low + high) / 2;
////        val = a[mid];
////
////        if (val == key){
////            return mid;
////        }
////
////        if (val > key){
////            high = mid - 1;
////        }
////        else {
////            low = mid + 1;
////        }
////
////    }
////
////}
////
////int main () {
////
////    int a[] = {1, 3, 23, 45, 56, 67, 68, 234, 465};
////
////    int a_size = sizeof (a) / sizeof (a[0]) - 1;
////
////    cout << bin_search(a, a_size, 67);
////
////}
//
//
//// Задача 2. Крестики-нолики
//
//// Старинная-добрая игра на страницах всех школьных тетрадей.
//// Поле размером 3х3 представлено в виде двумерного массива
//// с типом элементов char. Помните тот символьный тип из предыдущего модуля?
//// Теперь он нам и пригодится. Участвуют два игрока,
//// которые ходят по очереди и ставят в указанные ими в
//// стандартном вводе координаты свой символ - ‘X’ или ‘O’ (буквы латинского алфавита).
//// Как только у одного из игроков будет установлено подряд три крестика или три нолика - он побеждает.
//// Если свободных клеток не осталось, а трёх совпадающих элементов не найдено - объявляется ничья.
//// Для простоты, мы не будем рассматривать диагональные совпадения,
//// а только строго вертикальные либо строго горизонтальные.
////
//// Изначально всё поле инициализируется символом пробела - ‘ ‘.
//// Это можно сделать сразу при объявлении, либо с помощью вложенного цикла.
//// На каждом ходе, при занятой клетке или при неверных координатах этой
//// клетки должно быть выведено сообщение и игрок должен указать
//// координаты клетки повторно. После каждого хода надо выводить в консоль текущее
//// состояние всего игрового поля, для наглядности.
////
//// Сделаю ещё одну небольшую подсказку. Проверку на победу игрока,
//// которую надо осуществлять после каждого хода, можно сделать с
//// помощью вложенного цикла, сразу проверяя и вертикаль и горизонталь а как именно - попробуйте догадаться сами.
//
//
//char table[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
//int player = 1;
//int turn = 0;
//
//void draw() {
//
//    cout << "      |      |      \n";
//    cout << "  " << table[0][0] << "   |   " << table[0][1] << "  |  " << table[0][2] << "\n";
//    cout << "______|______|______\n";
//    cout << "      |      |      \n";
//    cout << "  " << table[1][0] << "   |   " << table[1][1] << "  |  " << table[1][2] << "\n";
//    cout << "______|______|______\n";
//    cout << "      |      |      \n";
//    cout << "  " << table[2][0] << "   |   " << table[2][1] << "  |  " << table[2][2] << "\n";
//    cout << "______|______|______\n";
//    cout << "      |      |      \n";
//
//}
//
//
//bool is_winner() {
//
//    bool winner = false;
//
//            if ((table[0][0] == table[0][1] && table[0][1] == table[0][2]) && table[0][0] != ' '){
//                winner = true;
//            }
//            else if ((table[1][0] == table[1][1] && table[1][1] == table[1][2]) && table[1][0] != ' '){
//                winner = true;
//            }
//            else if ((table[2][0] == table[2][1] && table[2][1] == table[2][2]) && table[2][0] != ' '){
//                winner = true;
//            }
//
//
//            else if ((table[0][0] == table[1][0] && table[1][0] == table[2][0]) && table[0][0] != ' '){
//                winner = true;
//            }
//            else if ((table[0][1] == table[1][1] && table[1][1] == table[2][1]) && table[0][1] != ' '){
//                winner = true;
//            }
//            else if ((table[0][2] == table[1][2] && table[1][2] == table[2][2]) && table[0][2] != ' '){
//                winner = true;
//            }
//
//
//    return winner;
//
//}
//
//
//void set_position() {
//
//    cout << "Player " << player << "`s turn. Enter number between 1 and 9:";
//
//
//    cin >> turn;
////    for (int i = 0; i < 3; ++i){
////        for (int j = 0; j < 3; ++j){
////            if (turn == 1) { table[i][j] = table[0][0];}
////            if (turn == 2) { table[i][j] = table[0][1];}
////            if (turn == 3) { table[i][j] = table[0][2];}
////            if (turn == 4) { table[i][j] = table[1][0];}
////            if (turn == 5) { table[i][j] = table[1][1];}
////            if (turn == 6) { table[i][j] = table[1][2];}
////            if (turn == 7) { table[i][j] = table[2][0];}
////            if (turn == 8) { table[i][j] = table[2][1];}
////            if (turn == 9) { table[i][j] = table[2][2];}
////        }
////    }
////    cout << "\n";
//
//    while (turn < 0 || turn > 9) {
//        cout << "Choose valid number between 1 and 9:";
//        cin >> turn;
//        }
//    cout << "\n";
//
//    for (int i = 0; i < 1; ++i) {
//        for (int j = 0; j < 1; ++j) {
//            if (table[i][turn - 1] != ' '){
//                cout << "choose another spot!";
//                cin >> turn;break;
//            }
//        }
//        cout << endl;
//    }
//
//
//}
//
//void update() {
//
//    if (player % 2 == 1 ){
//        for (int i = 0; i < 1; ++i){
//            for (int j = 0; j < 1; ++j){
//                table[i][turn - 1] = 'X';
//            }
//        }
//    }
//
//    else
//        for (int i = 0; i < 1; ++i) {
//            for (int j = 0; j < 1; ++j) {
//                table[i][turn - 1] = 'O';
//            }
//        }
//
//}
//
//bool is_filled() {
//    bool fill = true;
//
//    for (int i = 0; i < 3; i++){
//        for (int j = 0; j < 3; j++){
//            if (table[i][j] == ' '){
//                fill = false;
//            }
//        }
//    }
//
//    return fill;
//}
//
//
//void change_player () {
//    if (player == 1){
//        player += 1;
//    }
//
//    else {
//        player -= 1;
//    }
//}
//
//void new_turn () {
//    while (!is_winner() && !is_filled()){
//        set_position();
//        update();
//        change_player();
//        draw();
//    }
//}
//
//
//void end_game() {
//    if (is_winner() && turn % 2 == 0) {
//        player = 2;
//        cout << "Winner! player " << player;
//    }
//    else if (is_winner() && turn % 2 != 0){
//        player = 1;
//        cout << "Winner! player " << player;
//    }
//    else if (is_filled()){
//        cout << "Draw game!";
//    }
//}
//
//
//int main() {
//
//    cout << "Tick - tac - toe\n";
//    cout << "================\n";
//    cout << "Player 1 is <X>\n" << "Player 2 is <0>\n" << "================\n\n";
//
//
//    new_turn();
//    end_game();
//
//
//}
//
//
////#include <iostream>
////
////
////std::string board[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
////int player = 1;
////int position = 0;
////
////void introduction() {
////
////    std::cout << "Press [Enter] to begin: ";
////    std::cin.ignore();
////
////    std::cout << "\n";
////
////    std::cout << "===========\n";
////    std::cout << "Tic-Tac-Toe\n";
////    std::cout << "===========\n\n";
////
////    std::cout << "Player 1) ✖\n";
////    std::cout << "Player 2) ⊙\n\n";
////
////    std::cout << "Here's the 3 x 3 grid:\n\n";
////
////    std::cout << "     |     |      \n";
////    std::cout << "  1  |  2  |  3   \n";
////    std::cout << "_____|_____|_____ \n";
////    std::cout << "     |     |      \n";
////    std::cout << "  4  |  5  |  6   \n";
////    std::cout << "_____|_____|_____ \n";
////    std::cout << "     |     |      \n";
////    std::cout << "  7  |  8  |  9   \n";
////    std::cout << "     |     |      \n\n";
////
////}
////
////bool is_winner() {
////
////    bool winner = false;
////    // rows
////    if ((board[0] == board[1]) && (board[1] == board[2]) && board[0] != " ") {
////        winner = true;
////    } else if ((board[3] == board[4]) && (board[3] == board[5]) && board[3] != " ") {
////        winner = true;
////    } else if ((board[6] == board[7]) && (board[6] == board[8]) && board[6] != " ") {
////        winner = true;
////    }
////        // columns
////    else if ((board[0] == board[3]) && (board[0] == board[6]) && board[0] != " ") {
////        winner = true;
////    } else if ((board[1] == board[4]) && (board[1] == board[7]) && board[1] != " ") {
////        winner = true;
////    } else if ((board[2] == board[5]) && (board[2] == board[8]) && board[2] != " ") {
////        winner = true;
////    } // diagonals
////    else if ((board[0] == board[4]) && (board[0] == board[8]) && board[0] != " ") {
////        winner = true;
////    }
////    else if ((board[2] == board[4]) && (board[2] == board[6]) && board[2] != " ") {
////        winner = true;
////    }
////
////    return winner;
////
////}
////
////bool filled_up() {
////
////    bool filled = true;
////
////    for (int i = 0; i < 9; i++) {
////
////        if (board[i] == " ") {
////
////            filled = false;
////
////        }
////
////    }
////
////    return filled;
////
////}
////void draw() {
////
////    std::cout << "     |     |      \n";
////
////    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
////
////    std::cout << "_____|_____|_____ \n";
////    std::cout << "     |     |      \n";
////
////    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
////
////    std::cout << "_____|_____|_____ \n";
////    std::cout << "     |     |      \n";
////
////    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
////    std::cout << "     |     |      \n";
////
////    std::cout << "\n";
////
////}
////
////void set_position() {
////
////    std::cout << "Player " << player << "'s Turn (Enter 1-9): ";
////
////    while (!(std::cin >> position)) {
////
////        std::cout << "Player " << player << ", please enter a valid number between 1 and 9: ";
////        std::cin.clear();
////        std::cin.ignore();
////
////    }
////
////    std::cout << "\n";
////
////    while (board[position-1] != " ") {
////
////        std::cout << "Oops, there's already something in that position!\n\n";
////
////        std::cout << "Player " << player << "'s Turn (Enter 1-9): ";
////        std::cin >> position;
////
////        std::cout << "\n";
////    }
////
////}
////
////void update_board() {
////
////    if (player % 2 == 1) {
////
////        board[position-1] = "✖";
////
////    } else {
////
////        board[position-1] = "⊙";
////
////    }
////
////}
////
////void change_player() {
////
////    if (player == 1) {
////
////        player++;
////
////    } else {
////
////        player--;
////
////    }
////
////}
////
////void take_turn() {
////
////    while ( !is_winner() && !filled_up() ) {
////
////        set_position();
////
////        update_board();
////
////        change_player();
////
////        draw();
////
////    }
////
////}
////
////void end_game() {
////
////    if (is_winner()) {
////        std::cout << "There's a winner!\n";
////    }
////    else if (filled_up()) {
////        std::cout << "There's a tie!\n";
////    }
////
////}
////
////int main () {
////
////        introduction();
////
////        take_turn();
////
////        end_game();
////
////}