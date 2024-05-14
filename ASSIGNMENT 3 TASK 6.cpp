#include<iostream>
using namespace std;
int main(){
	int array[3][3];
	int transposearray[3][3];
	cout << "MY NAME IS MUHAMMAD TAHA REHMAN" << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
         cin>> array[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			transposearray[i][j]=array[j][i];
		}
	}
	
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"transpose of given array "<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<transposearray[i][j]<<" ";
		}
		cout<<endl;
	}
}

