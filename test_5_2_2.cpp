#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	int grade = 0;
	cout << "Please give me your grade" << endl;
	cin >> grade;
	string score[]={"F","D","C","B","A"};
	string grade_c;
	grade < 60 ? grade_c = score[0]:
		grade == 100 ? grade_c = "A++" :
			grade_c = score[(grade -50)/10];
	grade >= 60 && grade != 100 && grade % 10 < 3 ? grade_c += "-" 
		       : grade >= 60 && grade != 100 && grade % 10 > 7 ?
		       grade_c += "+":grade_c += "";
	cout << grade_c << endl;
	return 0;
}
