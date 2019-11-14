#include "myMath.h"
#define E 2.718281

double Exp(int x){
	double result = 1;
	if ( x > 0 ){
		while (x != 0){
			result = result*E;
			x--;
		}
	return result;
	}
	
	if ( x < 0 ){
		while (x != 0){
			result = result*E;
			x++;
		}
	return 1/result;
	}
	else
		return 1;
}

double Pow(double x, int y){
	double result = 1;
	if (y > 0 ){
		while (y != 0){
			result = result*x;
			y--;
		}
	return result;
	}
	if (y < 0 ){
		while (y != 0){
			result = result*x;
			y++;
		}
	return 1/result;
	}
	
	else
		return 1;
	
}

