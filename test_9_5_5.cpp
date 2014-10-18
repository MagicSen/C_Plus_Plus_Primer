#include <iostream>
#include <vector>
#include <string>

using namespace std;



class Date_test{
public:
	Date_test();
	Date_test(const string &date_test, int type);
	void show_date();
private:
	unsigned long year;
	unsigned long month;
	unsigned long day;
};
Date_test::Date_test()
{}

Date_test::Date_test(const string &date_test,int type)
{
	vector<string> month_name{"January","February","March","April","May","June","July","August","September","October","November","December"};
	if(type == 1){
		for(auto i = month_name.begin(); i != month_name.end(); ++i)
		{
			if(date_test.find((*i)) != string::npos){
				month = i-month_name.begin() +1;
				break;
			}
		}
		day = stoul(date_test.substr(date_test.find_first_of(" ")+1,date_test.find_first_of(",")-1));
		year = stoul(date_test.substr(date_test.find_first_of(",")+1)); 
	}else if(type == 2){
		// substr copy begin~end-1
	//	cout << date_test.substr(date_test.find_last_of("/"))<< endl;
		month = stoul(date_test.substr(0,date_test.find_first_of("/")));	
		day = stoul(date_test.substr(date_test.find_first_of("/")+1,date_test.find_last_of("/")-2));
		year = stoul(date_test.substr(date_test.find_last_of("/")+1));
	}else{
		for(auto i = month_name.begin(); i != month_name.end(); ++i)
		{
			if(date_test.find((*i).substr(0,2)) != string::npos){
				month = i-month_name.begin() +1;
				break;
			}
		}
		day = stoul(date_test.substr(date_test.find_first_of(" ")+1,date_test.find_last_of(" ")-1));
		year = stoul(date_test.substr(date_test.find_last_of(" ")+1)); 
	}
}

void Date_test::show_date()
{
	cout << "Year: " << year << " Month: " << month << " Day: " << day << endl;
}

int main()
{
	vector<string> number_str{"a1","b2","c3","d44"};
	double sum = 0;
	for(auto i:number_str)
	{
		cout << i << endl;
	//	sum += stoi(i.substr(i.find_first_of("+-0123456789")));	
		sum += stod(i.substr(i.find_first_of("+-0123456789")));	
	}
	cout << "Total sum is: "<< sum << endl;

	string date1 = "January 1,1900";
	string date2 = "1/2/1990";
	string date3 = "Jan 1 1900";
//	Date_test d1(date1,1);
	Date_test d2(date2,2);
//	Date_test d3(date3,3);
//	d1.show_date();
	d2.show_date();
//	d3.show_date();
	return 0;
}
