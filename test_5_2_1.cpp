#include <iostream>
#include <string>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::abs;
int main()
{
	int grade = 0;
	cout << "Please give me your grade then convert it to character."
	     << endl;
	cin >> grade ;
	string grade_c;
	string score[] = {"F","D","C","B","A"};
	if(grade < 60)
		grade_c = score[0];	
	else{
		if(grade == 100)
			grade_c = "A++";
		else
			grade_c = score[(grade - 50)/10];
		if(grade >= 60){
			if(grade % 10 <=3)
				grade_c += "-";
			else if(grade %10 > 7)
				grade_c += "+";
			else 
				;
		}
	}
	cout << grade_c << endl;
	return 0;
}
