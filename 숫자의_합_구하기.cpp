#include <iostream>
#include <string>
using namespace std;

int main11720()
{
	short N;
	string number;
	int result = 0;

	cin >> N;

	cin >> number;
	
	
	for (int i = 0; i < number.length(); i++)
	{
		result += number.at(i) - '0';
	}
	
	cout << result;

	return 0;
	
}