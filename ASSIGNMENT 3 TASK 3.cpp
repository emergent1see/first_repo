#include <iostream>
#include <string>
using namespace std;
int main(){
	cout<<"MY NAME IS MUHAMMAD TAHA REHMAN"<<endl;
	cout << "Grocery list for dinner party: ";
	string items[7] = {"Meat", "Rice", "Cereals", "Vegetables", "Oil", "Spices"};
	for(int i = 0; i<7; i++){
		cout << "\n[" << items[i] << "]";
	}
	cout << endl;
	items[6] = "Fish";
	cout << endl << "---------------------------------" << endl;
	
	cout << "Updated List" << endl;
	
	for(int i = 0; i<7; i++){
		cout << "\n[" << items[i] << "]";
	}
	cout << endl;
	cout << "Now I want to change item at index [0]" << endl;
	items[0] = "Fruits";
	cout << items[0];
}
