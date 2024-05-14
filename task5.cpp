// ATTA UR REHMAN
// B24S0063AI026
#include <iostream>
using namespace std;

int main() {
	
    int array_2d[3][3];
	int maximum = 0;
	
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> array_2d[i][j];
        }
        cout << endl; 
    }
    cout << "Changing rows into columns" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array_2d[j][i] << " ";
            
        }
        cout << endl;  
    }

    return 0;
}

