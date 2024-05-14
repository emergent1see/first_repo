// B24S0063AI026
// Atta Ur Rehman
#include <iostream>
using namespace std;

void display2DArray(int arr[3][3],int rows){
	int max = 0, min = 90000, sec_larg = 0;
	cout << "\nInputed array is " << endl;
	for(int i = 0; i<rows; ++i){
		for(int j = 0; j<3; ++j){
			cout << "[" << i << "][" << j << "]:" << arr[i][j] << " ";
			
			if (arr[i][j] > max){ // to find maximum number
				max = arr[i][j];
			}
			if (arr[i][j] < min){ // to find minimum number
				min = arr[i][j];
			}
		for (int x = min; x < max; x++){ // to find second largest
			sec_larg = x;
		}
		}
		cout << endl;
		
	}
	cout << "Maximum number is: " << max << endl;
	cout << "Minimum number is: " << min << endl;
	cout << "Second Largest is: " << sec_larg << endl;
}

int sum2DArray (int arr[][3], int rows){
	int sum = 0;
	
	// to get the input of array
	
	for (int i = 0; i<rows; ++i){
		for (int j = 0; j<3; ++j){
			sum += arr[i][j];
		}
	}
	return sum;
}

int main(){
	int sec_larg = 0;
	int seq = 0;
	int reverse[3][3];
	int arr[3][3];
	for (int i = 0; i<3; i++){
		for(int j =0; j<3; j++){
			cout << "Enter element  at index " << seq++ << " ";
			cin >> arr[i][j];
			reverse[i][j] = arr[i][j];
		}
		cout << endl;
	}
		cout << "Reverse array is " << endl;
		for(int x = 2; x>=0; x--){
			for (int y = 2; y>=0; y--){
				cout << "[" << reverse[x][y] << "]";
//				cout << "[" << x << "][" << y << "]:" << reverse[x][y] << " ";
			}
			cout << endl;
		}
	
	display2DArray(arr,3);
	int sum = sum2DArray(arr, 3);
	cout << "The sum of elements of array is " << sum << endl;
	int average = sum / 9;
	cout << "Average is: " << average << endl;
}
