#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

bool isPrime(string s){
		int n = atoi(s.c_str());
		if (n % 2 == 0) return false;
	        for (int i = 3; i <= (sqrt(n)); i+=2){
	                if (n % i == 0) return false;
	        }
	        return true;
}

string rotate(string t){
	int length = t.length();
	char c = t[0];
	string s = t.substr(1);
	s = s + c;
	return s;
}

int cap = 1000000;

int main(){
	int count = 1; //2
	for (int i = 3; i <= cap; i+=2){
		stringstream ss;
		ss << i;
		string s = ss.str();
		bool prime = true;	
		int counter = 1;
		if (isPrime(s)){
			while (counter <= s.length()){
				s = rotate(s);
				prime = prime & isPrime(s);
				counter++;
			}
		} else { prime = false; }
		if (prime) { count++; }
	}
	cout << count << endl;
	return 0;
}
