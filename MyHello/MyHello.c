#include <stdio.h>

int main(void){
	int n1, n2, nRs;
	float f1, f2, fRs, fVal,fVal2;
	//printf("Hello World, I am in CptS 121! \n");
	printf("Type Integer Numbers 1 and 2 respectively\n");
	scanf_s("%d",&n1);
	scanf_s("%d",&n2);
	printf("Typed Integer numbers %d and %d \n",n1,n2);
	printf("Type Float Numbers 1 and 2 respectively\n");
	scanf_s("%f",&f1);
	scanf_s("%f",&f2);
	fRs = f1 - f2;
	printf("The result of %.2f - %.2f is: %.2f \n",f1,f2,fRs);
	nRs = n1 * f1;
	printf("The result of %d x %.2f is: %d \n",n1,f1,nRs);
	nRs = n1 / n2;
	fVal = n1;
	fVal2 = n2;
	fRs = fVal / fVal2;
	printf("The result of %d / %d as integer is: %d, and the result as float is: %f \n",n1,n2,nRs, fRs);
	nRs = n1 / f2;
	fRs = n1 / f2;
	printf("The result of %d / %.2f as integer is: %d, and the result as float is: %f \n",n1,f2,nRs, fRs);
	fVal = n1;
	fRs = fVal / n2;	
	printf("The result of %.2f cast as a float divided by %d as float is: %f \n",fVal,n2,fRs);
	nRs = n1 % n2;
	printf("The result of %d % (mod) %d is: %d \n",n1,n2,nRs);
	if(n1 % 2 == 0 && n2 % 2 == 0){
		printf("They are even \n");	
	}else{
		printf("They are odd \n");
	}

	return 0;
}