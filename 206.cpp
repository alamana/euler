#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long double a = 0*1;
	long double b = 9*100;
	long double c = 8*10000;
	long double d = 7*1000000;
	long double e = 6*100000000;
	long double f = 5*10000000000;
	long double g = 4*1000000000000;
	long double h = 3*100000000000000;
	long double i = 2*10000000000000000;
	long double j = 1*1000000000000000000;

	long double sq = 0;
	for (int z = 0; z <= 9; z++){
		for (int y = 0; y <= 9; y++){
			for (int x = 0; x <= 9; x++){
				for (int w = 0; w <= 9; w++){
					for (int v = 0; v <=9; v++){
						for (int u = 0; u <= 9; u++){
							for (int t = 0; t <= 9; t++){
								for (int s = 0; s <= 9; s++){
									for (int r = 0; r <= 9; r++){
										long double sum = a + b + c + d + e + f + g + h + i + j;
										sum+= r*10;
										sum+= s*1000;
										sum+= t*100000;
										sum+= u*10000000;
										sum+= v*1000000000;
										sum+= w*100000000000;
										sum+= x*10000000000000;
										sum+= y*1000000000000000;
										sum+= z*100000000000000000;
										sq = sqrt(sum);
										if (sq*sq == sum) {cout << sq; break;}					
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}	
