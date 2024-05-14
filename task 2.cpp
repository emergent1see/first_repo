//Atta Ur Rehman
//B24S0063AI026

#include <iostream>
using namespace std;
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	int sum = 0;
	for (int i = 0; i<6; i++){
		sum+=arr[i];
	}
	cout << "The sum of arrays is: " << sum;
}
