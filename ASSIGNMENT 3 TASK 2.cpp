#include <iostream>
using namespace std;
int main(){
	cout<<" MY NAME IS MUHAMMAD TAHA REHMAN"<<endl;
	int week [7];
	for (int i = 0 ; i<7; i++){
		cout<<"temperature of this day"<< (i + 1) <<" :" ;
		cin>>week[i];
		}
		//hottesst day
	float hottest = 0;
	for(int j = 0; j<7; j++){
		if(week[j] >= hottest){
		hottest = week[j];
		}
	}
	cout <<"The hottest temperature is : " <<hottest<< endl;
	//coldest day
	float coldest = 100;
	for(int k = 0; k<7; k++){
		if(week[k] <= coldest){
		coldest = week[k];
		}
	}
	cout <<"The coldest temperature is : " <<coldest<< endl;
	return 0;
}
	

