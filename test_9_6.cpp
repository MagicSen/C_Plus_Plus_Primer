#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;
bool get_math_expression(string read_line,vector<string> &math_expression_full)
{
	if(read_line.size() == 0){
		return false;
	}
	string number = "";
	string symbol = "";
	for(auto i = read_line.begin(); i != read_line.end(); ++i)
	{
		if((*i) == '+' || (*i) == '-' || (*i) == '*' || (*i) == '/' || (*i) == '(' || (*i) == ')'){
			if(number.size() == 0){
				symbol.push_back((*i));
				math_expression_full.push_back(symbol);
				symbol = "";
			}else{
				math_expression_full.push_back(number);
				number = "";
				symbol.push_back((*i));
				math_expression_full.push_back(symbol);
				symbol = "";
			}
		}else{
			number.push_back(*i);
		}
	}
	if(number.size() != 0)
		math_expression_full.push_back(number);
	return true;
}
void solve_mul_div(vector<string> &math_expression_full)
{
	string numbers = ".0123456789";
	if(math_expression_full.size() < 2)
		return;
	for(auto i = math_expression_full.begin()+1; i+1 != math_expression_full.end();)
	{
		if((*i).find_first_of("*/") != string::npos && (*(i-1)).find_first_of(numbers) != string::npos && (*(i+1)).find_first_of(numbers) != string::npos){
			double number1 = stod(*(i-1)); 
			double number2 = stod(*(i+1));
			double result = 0;
			if((*i)[0] == '*'){
				result = number1 * number2;
			}else{
				result = number1 / number2;
			}
			string temp_result = to_string(result);
			i = math_expression_full.erase(i-1,i+2);	
			i = math_expression_full.insert(i,temp_result);
		}else{
			++i;
		}
	}
}
void solve_add_sub(vector<string> &math_expression_full)
{
	string numbers = ".0123456789";
	if(math_expression_full.size() < 2)
		return;
	for(auto i = math_expression_full.begin()+1; i+1 != math_expression_full.end();)
	{
		if((*i).find_first_of("-+") != string::npos && (*(i-1)).find_first_of(numbers) != string::npos && (*(i+1)).find_first_of(numbers) != string::npos){
			string number1_str="";	
			// Deal with symbol
			if(i-math_expression_full.begin() == 2 && (*(i-2)).find_first_of("+-") != string::npos){
				number1_str = (*(i-2))+(*(i-1));	
			}else{
				number1_str = (*(i-1));
			}
			double number1 = stod(number1_str); 
			double number2 = stod(*(i+1));
			double result = 0;
			if((*i)[0] == '+'){
				result = number1 + number2;
			}else{
				result = number1 - number2;
			}
			string temp_result = to_string(result);
			i = math_expression_full.erase(i-1,i+2);	
			i = math_expression_full.insert(i,temp_result);
		}else{
			++i;
		}
	}
}
void solve_brackets(vector<string> &math_expression_full)
{
	string numbers = ".0123456789";
	for(auto i = math_expression_full.begin()+1; i+1 != math_expression_full.end();)
	{
		if((*i).find_first_of(numbers) != string::npos && (*(i-1)).find_first_of("(") != string::npos && (*(i+1)).find_first_of(")") != string::npos){
			string temp_number = (*i);
			i = math_expression_full.erase(i-1,i+2);	
			i = math_expression_full.insert(i,temp_number);
		}else{
			++i;
		}
	}

/*	stack<string> temp_expression;
	for(auto i = math_expression_full.size()-1; i >= 0; --i)
	{
		temp_expression.push(math_expression_full[i]);
	}
	while(!temp_expression.empty())
	{
		cout << temp_expression.top() << endl;
		temp_expression.pop();
	}
	*/
}
void show_expression(const vector<string> &math_expression_full)
{
	if(math_expression_full.size() > 2)
	{
		for(auto i = math_expression_full.begin(); i != math_expression_full.end(); ++i)
			cout << (*i) << endl;
	}else if(math_expression_full.size() == 2){
		cout << math_expression_full[0] << math_expression_full[1] << endl;
	}else{
		cout << math_expression_full[0] << endl;
	}
	
	cout << "############################" << endl;
}
int main()
{
//	stack<string> math_expression{"1","2","3","4"};
//	stack<string> math_symbol{"(","+",")","*","(","+",")"};

	string read_line;
	while(cin >> read_line)
	{
		vector<string> math_expression_full;
		if(get_math_expression(read_line,math_expression_full)){
			show_expression(math_expression_full);
			solve_mul_div(math_expression_full);	
			show_expression(math_expression_full);
			solve_add_sub(math_expression_full);
			solve_brackets(math_expression_full);
		//	show_expression(math_expression_full);
		//	solve_mul_div(math_expression_full);
		//	double result = solve_add_sub(math_expression_full);
		//	cout << "The expression's result is: " << result << endl;
		}else{
			cout << "Error: Unknown math expression." << endl;
		}
	}
	
	return 0;
}
