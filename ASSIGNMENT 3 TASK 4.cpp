#include <iostream>
using namespace std;
int main(){
	cout<< "MY NAME IS MUHAMMAD TAHA REHMAN"<<endl;
	char arrangements[4][4];
	for (int i = 0; i<4; i++){
		for (int j = 0; j<4; j++){
			cin >> arrangements[i][j];
		}
		cout << endl;
	}
	int empty = 0;
	int occopied = 0;
	for (int i = 0; i<4; i++){
		for (int j = 0; j<4; j++){
			cout << arrangements[i][j];
			if (arrangements[i][j] == 'e' || arrangements[i][j] == 'E'){
				empty +=1;
			}
			else if(arrangements[i][j] == 'o' || arrangements[i][j] == 'O'){
				occopied +=1;
			}
		}
		cout << endl;
	}
		cout << "Empty seats are: " << empty << endl;
		cout << "Occopied seats are: " << occopied << endl;
}
