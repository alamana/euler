#include <iostream>
#include <math.h>
using namespace std;

int cap = 2000000;

bool isPrime(const int n){
	int div = 3;
	for (int i = 3; i <= (sqrt(n)); i+=2){
		if (n % i == 0) return false;
	}
	return true;
}

int main(){
	long long sum = 5;
	for (int i = 5; i <= cap; i+=2){
		if (isPrime(i)) sum+= i;
		cout << sum << " " << i << endl;
	}
	cout << sum << endl;
	return 0;
}
