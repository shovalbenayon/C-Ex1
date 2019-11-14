#include "myMath.h"
#include "stdio.h"

float add (float x,float y);
float sub (float x,float y);
double mul (double x,int y);
double div (double x,int y);
double Exp(int x);
double Pow(double x, int y);

int main()
{
	printf("Please insert a real number:");
	double x;
	scanf("%lf",&x);
	double fx1 =(sub(add(Exp(x) , Pow(x , 3)) , 2));
	double fx2 =(add(mul(x , 3) , mul(Pow(x , 2) , 2)));
	double fx3 =(sub(div(mul(Pow(x , 3) , 4) , 5 ) , mul(x , 2)));
	printf("THE VALUE OF f(x) = e^x + x^3 - 2 at the point %lf is: %lf \n", x, fx1);
	printf("THE VALUE OF f(x) = 3x + 2x^2 at the point %lf is: %lf\n", x , fx2);
	printf("THE VALUE OF f(x) = (4x^3)/5 - 2x at the point %lf is: %lf\n", x , fx3);

}

