#include<iostream>
using namespace std;
void main()
{
	int point;
	cout << " Please enter your point : ";
	cin >> point;
	cout << " Your got a grade : ";

	if(point<=59){
		cout << " F " << endl;
	}
	else if (point>=60 && point<=69){
		cout << " D " << endl;
	}
	else if (point>=70 && point<=79){
		cout << " C " << endl;
	}
	else if (point>=80 && point<=89){
		cout << " B " << endl;
	}
	else if (point>=90 && point<=100){
		cout << " A " << endl;
	}
	else if (point>100){
		cout << " Error!! " << endl;
	}

}