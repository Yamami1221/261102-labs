#include<iostream>
#include<list>

using namespace std;

//Write function count() here.
int count(int data[],int size){
	list<int> line_up;
	list<int>::iterator loc;
	int i;
	for(i=0;i<size;i++){
		line_up.push_back(data[i]);
	}
	line_up.sort();
	line_up.unique();
	return line_up.size();
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
