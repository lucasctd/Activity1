#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main(void){
	
	//Var exercise A
	int n1, n2, nRs;
	double f1, f2, fRs;
	//Var exercise B
	int v,r,i;
	//Var exercise C
	int p;
	//Var exercise D
	int x,y,a,b,c,d;
	//Var exercise E
	double circum, radius;

	printf("**********************************Exercise A ************************************* \n\n\n");
	printf("Type Integer Numbers 1 and 2 respectively\n");
	scanf_s("%d",&n1);
	scanf_s("%d",&n2);
	printf("Typed Integer numbers %d and %d \n",n1,n2);
	printf("Type Float Numbers 1 and 2 respectively\n");
	scanf_s("%lf",&f1);
	scanf_s("%lf",&f2);
	fRs = f1 - f2;
	printf("The result of %.2lf - %.2f is: %.2lf \n",f1,f2,fRs);
	nRs = n1 * f1;
	printf("The result of %d x %.2f is: %d \n",n1,f1,nRs);
	nRs = n1 / n2;
	//fVal = n1;
	//fVal2 = n2;
	fRs = ((double) n1 / n2);
	printf("The result of %d / %d as integer is: %d, and the result as float is: %lf \n",n1,n2,nRs, fRs);
	nRs = n1 / f2;
	fRs = n1 / f2;
	printf("The result of %d / %.2lf as integer is: %d, and the result as float is: %lf \n",n1,f2,nRs, fRs);
	//fVal = n1;
	fRs = ((double) n1 / n2);	
	printf("The result of %d casted as a float divided by %d as float is: %lf \n",n1,n2,fRs);
	nRs = n1 % n2;
	printf("The result of %d % (mod) %d is: %d \n",n1,n2,nRs);
	if(n1 % 2 == 0 && n2 % 2 == 0){
		printf("They are even \n");	
	}else{
		printf("They are odd \n");
	}

	printf("\n\n\n******************************** Exercise B ******************************** \n\n\n");
	printf("Please, type the the current and resistence respectively.\n");
	scanf_s("%d",&i);
	scanf_s("%d",&r);
	v = r*i;
	printf("The voltage (V) is %d",v);
	
	printf("\n\n\n******************************** Exercise C ******************************** \n\n\n");
	printf("Please, type the the voltage and resistence respectively.\n");
	scanf_s("%d",&v);
	scanf_s("%d",&r);
	p = (v*v)/r;//pow(v,2);
	printf("The power (P) is %d",p);
	
	printf("\n\n\n******************************** Exercise D ******************************** \n\n\n");
	printf("Please, type the values of a,b,c,d and x respectively to provide the Y value of polynominal equation.\n");
	scanf_s("%d",&a);
	scanf_s("%d",&b);
	scanf_s("%d",&c);
	scanf_s("%d",&d);
	scanf_s("%d",&x);
	y = 0;//3 * (a*(pow((double)x,3)) + ((double) 1/4) * b*x^2 + 10 * c*x + (-5) * d);
	printf("The polynominal value of this equation (Y) is %d",y);

	
	printf("\n\n\n******************************** Exercise E ******************************** \n\n\n");
	printf("Please, type the radius value to provide the circumference of the circle.\n");
	scanf_s("%lf",&radius);
	circum = 2*PI*radius;
	printf("The circumference of the circle is %lf",circum);

	
	return 0;
}