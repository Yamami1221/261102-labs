#include<iostream>
using namespace std;

int main(){
	char grade;
	int i=1;
	int count[5] = {0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A') { // if grade is A
			count[0]++; // count A
			i++;
		}else if(grade == 'B') { // if grade is B
			count[1]++; // count B
			i++;
		}else if(grade == 'C') { // if grade is C
			count[2]++; // count C
			i++;
		}else if(grade == 'D') { // if grade is D
			count[3]++; // count D
			i++;
		}else if(grade == 'F') { // if grade is F
			count[4]++; // count F
			i++;
		}else if(grade == '0') { // if grade is 0
			break; // exit loop
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again." << endl;
		}
	}while(true);
	
	
	cout << "In total "<< i-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	return 0;
}