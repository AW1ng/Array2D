#include <iostream>
#include <windows.h>
using namespace std;
#define Wid 12
#define Hei 12

bool Bubble[Wid][Hei];
int PopCount = 144, POPED = 0;
bool isPoped;

void Init() {  

	for(int i = 0; i < Hei; i++) {
		for(int j = 0; j < Wid; j++) {
			Bubble[i][j] = true;
		}
	}
}

int Pop(int X1, int Y1, int X2, int Y2) {

	for(int i = X1; i <= X2; i++) {
		for(int j = Y1; j <= Y2; j++) {
			if(Bubble[i][j] == true) POPED++; isPoped = true;
			Bubble[i][j] = false;
			
		}
	}
	
	return 0;
}

void Check_Pop(int X1, int Y1, int X2, int Y2) {

	for(int i = X1; i <= X2; i++) {
		for(int j = Y1; j <= Y2; j++) {
			if(Bubble[i][j] == true) {
				Pop(X1, Y1, X2, Y2);

			}
			else if(Bubble[i][j] = false){
				isPoped = true;
				continue;
			}
		}
	}
	
	if(isPoped){
		for(int i = 0; i < POPED ; i++) {
			cout << "POP!";
		}
	}

	POPED = 0;
	
}


void Display() {
	int count  = 144;
	PopCount = 0;
	cout <<"\n\n\n\t  ----Bubble Wrap---- \n\n";
	for(int i = 0; i < Hei; i++) {
//		cout << count << " ";
		cout << '\t';
		for(int j = 0; j < Wid; j++) {
			if(Bubble[i][j] == true) {
				cout << 'O' << ' ';
			}
			if(Bubble[i][j] == false){
				cout << 'X' << ' '; count--;
				PopCount++;
				if(count == 0) {
					cout << "\n\n\tComplete!\a";  exit(0); 
				}
			}
		}
		cout << "\n";
	}
	
}



bool check_input(int x, int y, int x1, int y1) {
	
	if(x >= Hei || y >= Wid || x1 >= Hei || y1 >= Wid ||
		 x < 0 || y < 0 || x1 < 0 || y1 < 0 ) {
		return false;
	}
	return true;
}

void Update() {
	int X, Y, X1, Y1;
	
	cout << "Press Enter";
	char c = getchar();

	while(1){ // try to redo;
		while(1){
			cout << "\nEnter Coordintaes of the beginining: ";
			cin >> X >> Y;
			cout << "\nEnter Coordintaes of the end of the region: ";
			cin >> X1 >> Y1;
			if(!check_input(X, Y, X1, Y1)){
				cout <<"Wrong input!"; break;
			}
			else {
				Check_Pop(X, Y, X1, Y1);
				Display();
				cout << "\n\n";
				
			}
		}
	}
}

int main() {
	Init();
	Display();
	cout << "\n";
	Update();
	

}




