#include <iostream>
using namespace std;

/* 
 * a^2 + b^2 = c^2
 * a + b + c = 1000
 * 
 * a = m^2 - n^2
 * b = 2mn
 * c = m^2 + n^2
 *
 * 2m^2 + 2mn = 1000
 * m^2 + mn = 500
*/

int main(){
	int target = 500;
	int n,m,a,b,c;
	for (int i = 0; i < target; i++){
		for (int j = 0; j < target; j++){
			if ((i*i + i*j == target)){
				m = i;
				n = j;
				break;
			}
		}
	}
	a = m*m - n*n;
	b = 2*m*n;
	c = m*m + n*n;
	int product = a*b*c;
	cout << product << endl;
	return 0;
}
