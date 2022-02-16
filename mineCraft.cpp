#include <random>
#include <iostream>
#include <time.h>
using namespace std;


int getRandomInt(int From, int To, bool NeedInit = false) { // return random int between From and To
	int result;
	if(NeedInit) srand((unsigned)time(0));
	result = rand() % (To - From + 1);
	return result;
}


void Print2dArray(int **Data, int NStrings, int NCols) {
	int i, j;
	for(i = 0; i < NStrings; i++) {
		std::cout << "\n";
		for(j = 0; j < NCols; j++) {
			cout.width(4);
			cout << Data[i][j];
		}
	}
}


void Set2dArrayRandom(int **Data, int NStrings, int NCols, int From, int To) {
	int i, j;
	for(i = 0; i < NStrings; i++) {
//		std::cout << "\n";
		for(j = 0; j < NCols; j++) {
			Data[i][j] = getRandomInt(From, To);
		}
	}
}


void Set2dArrayValue(int **Data, int NStrings, int NCols, int Value = 0) {
	int i, j;
	for(i = 0; i < NStrings; i++) {
//		std::cout << "\n";
		for(j = 0; j < NCols; j++) {
			Data[i][j] = Value;
		}
	}
}


int **Init2dArray(int NStrings, int NCols) {
	int **Result = new int* [NStrings];
	for(int i = 0; i < NStrings; i++) {
		Result[i] = new int[NCols];
	}
	return Result;
}


void Delete2dArray(int **Data, int NStrings) {
	for(int i = 0; i < NStrings; i++) {
		delete[] Data[i];
	}
	delete[] Data;
}


int ***Init3dArray(int NStrings, int NCols, int **Heights) {
	int ***result = new int**[NStrings];
	for(int i = 0; i < NStrings; i++){
		result[i] = new int*[NCols];
	}
	for(int i = 0; i < NStrings; i++) {
		for(int j = 0; j < NCols; j++) {
			result[i][j] = new int[Heights[i][j]]; // possible zero
		}
	}
	return result;
}


void Set3dArrayRandom(int ***Data, int NStrings, int NCols, int **Heights, int From, int To) {
	for(int i = 0; i < NStrings; i++) {
		for(int j = 0; j < NCols; j++) {
			for(int k = 0; k < Heights[i][j]; k++) {
				Data[i][j][k] = getRandomInt(From, To);
			}
		}
	}
}

void Print3dArray(int ***Data, int NStrings, int NCols, int **Heights) {
//	cout << "\n\nWorld is a 3d-hell\n";
	for(int i = 0; i < NStrings; i++) {
		cout <<"\nString["<<i<<"]: ";
		for(int j = 0; j < NCols; j++) {
			cout <<"\nColumn["<<i <<"] [" << j <<"]: ";
			for(int k = 0; k < Heights[i][j]; k++) {
				cout << "[" <<i <<"] [" <<j <<"] [" <<k <<"] = " <<Data[i][j][k] << " ";
			}
		}
	}
}

void Delete3dArray(int ***Data, int NStrings, int NCols) {
	for(int i = 0; i < NStrings; i++) {
		for(int j = 0; j < NCols; j++) {
			delete[] Data[i][j];
		}
	}
	for(int i = 0; i < NStrings; i++) {
		delete[] Data[i];
	}
	delete Data;
}

void SetSumHeight(int ***Field, int NStrings, int NCols, int **BlockAmounts, int **SumHeights) {
	Set2dArrayValue(SumHeights, NStrings, NCols);
	for(int i = 0; i < NStrings; i++) {
		for(int j = 0; j < NCols; j++) {
			for(int k = 0; k < BlockAmounts[i][j]; k++) {
				SumHeights[i][j] += Field[i][j][k];
			}
		}
	}
} 


int GetMinHeight(int **SumHeights, int NStrings, int NCols)	{
	int result = SumHeights[0][0];
	for(int i = 0; i < NStrings; i++) {
		for(int j = 0; j < NCols; j++) {
			if(SumHeights[i][j] < result) {
				result = SumHeights[i][j];
			}
		}
	}
	return result;
}

	
int GetMaxHeight(int **SumHeights, int NStrings, int NCols)	{
	int result = SumHeights[0][0];
	for(int i = 0; i < NStrings; i++) {
		for(int j = 0; j < NCols; j++) {
			if(SumHeights[i][j] > result) {
				result = SumHeights[i][j];
			}
		}
	}
	return result;
}

void Compare2dArray(int **A,int NStrings, int NCols, int b,  int **Result) { //Sets 1 to result[i][j] if A >= B
	for(int i = 0; i < NStrings; i++) {
		for(int j = 0; j < NCols; j++) {
			if(A[i][j] >= b) Result[i][j] = 1;
			else Result[i][j] = 0;
		}
	}
}


int main() {
	int CutOff;
	int **BlockAmounts = Init2dArray(5, 5);	
	int NStrings = 5, NCols = 5;
	int **Cut = Init2dArray(NStrings, NCols);
	int **SumHeights = Init2dArray(NStrings, NCols);
	getRandomInt(0,2, true);
	Set2dArrayRandom(BlockAmounts, NStrings, NCols, 0, 10);
	Print2dArray(BlockAmounts, NStrings, NCols);
	
	
	int ***Arr3d = Init3dArray(NStrings, NCols, BlockAmounts);
	Set3dArrayRandom(Arr3d, NStrings, NCols, BlockAmounts, 0, 9);
	Print3dArray(Arr3d, NStrings, NCols, BlockAmounts);
	
	SetSumHeight(Arr3d, NStrings, NCols, BlockAmounts, SumHeights);
	int MinH = GetMinHeight(SumHeights, NStrings, NCols);
	int MaxH = GetMaxHeight(SumHeights, NStrings, NCols);
	cout << "\nEnter value to cut : ";
	cin >> CutOff;
	cout << endl;
	for(int h = MinH; h <= CutOff; h++) { // MaxH + 1
		cout << "\nH = " << h;
		Compare2dArray(SumHeights, NStrings, NCols, h, Cut);
		Print2dArray(Cut, NStrings, NCols);
	}
	Delete3dArray(Arr3d, NStrings, NCols);
	Delete2dArray(BlockAmounts, NStrings);
	Delete2dArray(SumHeights, NStrings);
	Delete2dArray(Cut, NStrings);
	
	cout << endl;
}

