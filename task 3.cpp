//Atta Ur Rehman
//B24S0063AI026

#include <iostream>
using namespace std;
int main(){
	int arr[] = {3, 4, 6, 7, 8, 3, 7, 5};
	int max = 0;
	
	for (int i = 0; i<8; i++){
		
		if(arr[0] < arr[i]){
			arr[0] = arr[i];
		}
		
	}
	cout << "Largest is " << arr[0];
	return 0;
}
