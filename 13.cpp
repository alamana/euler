#include <iostream>
#include <string>
using namespace std;

int main(){
	string in[100];
	int count = 0;
	while (count < 100){
		string s;
		cin >> s;
		in[count] = s.substr(0,50);
		cout << in[count] << endl;
		count++;
	}
	cout << "--------------" << endl;
	int carry = 0;
	int sum = 0;
	cout << "LS: ";
	for (int i = 0; i < 50; i++){
		for (int j = 0; j < 100; j++){
			sum += (in[j])[49-i] - '0';
		}
		carry = (sum - (sum%10)) / 10;
		int digit = sum % 10;
		cout << digit << "|";
		sum = carry;
	}
	cout << "|| " << sum < " ||";
	cout << endl;
	return 0;
}
