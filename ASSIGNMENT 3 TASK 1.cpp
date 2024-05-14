#include <iostream>
using namespace std;
int main(){
	cout << "MY NAME IS MUHAMMAD TAHA REHMAN " << endl;
	int grade, sum = 0;
	int num = 1;
	float average; 
	int students[10];
	for(int i = 0; i<10; i++){
		cout << "Enter marks of Student " << num++ << " ";
		cin >> grade;
		students[i] += grade;
		sum+=grade;
	}
	cout << "Total sum is: " << sum << endl;
	average = sum/10;
	cout << "Average is: " << average;
}
