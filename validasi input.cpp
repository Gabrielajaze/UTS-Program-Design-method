#include <stdio.h>
void getDeposito(double &deposito){
	printf("Enter the Deposito\n");
	scanf("%lf",&deposito);
	getchar();
	while(deposito < 100 || deposito > 10000){
		printf("The Deposito cannot be less than USD $100 or greater than USD $10,000\n");
		printf("\nEnter the Deposito\n");
		scanf("%lf",&deposito);
		getchar();
	}
	printf("Succesfull Deposito\n\n");
}


getTenor(int &tenor, double &bungaPerTahun){
	int menuSelection;
	
	printf("1. 1 Month  = 3.4%\n");
	printf("2. 3 Month  = 3.6%\n");
	printf("3. 6 Month  = 3.75%\n");
	printf("12 Month = 4.2%\n");
	
	printf("\nEnter your Selection\n");
	
	scanf("%d/n",&menuSelection);
	getchar();
	
	while(menuSelection < 1 || menuSelection > 4){
		printf("That is an invalid selection\n");
		printf("\nEnter your Selection\n");
		scanf("%d",&menuSelection);
		getchar();
	}
	
	switch(menuSelection){
			case 1 : 
				 tenor = 1;
				 bungaPerTahun = 0.034;
				puts("Tenor Is Accepted\n");
				break;
			case 2 :
				 tenor = 3;
				 bungaPerTahun = 0.036;
				puts("Tenor Is Accepted\n"); 
				break;
			case 3 : 
				tenor = 6;
				 bungaPerTahun = 0.0375;
				puts("Tenor Is Accepted\n");
				break;
			case 4:
				 tenor = 12;
				bungaPerTahun = 0.042;
				puts("Tenor Is Accepted\n");
				break;
		}
}


void getYear(int &year){
	printf("Enter the year\n");
	scanf("%d",&year);
	getchar();
	while(year < 1 || year > 10){
		printf("The Year cannot be less than 1 Year or greater than 10 Year\n");
		printf("\nEnter the year\n");
		scanf("%d",&year);
		getchar();
	}	
	puts("Year Is Accepted\n");
}

void getInput(){
	double depositoInput, bungaInput;
	int tenorInput, yearInput;
	getDeposito(depositoInput);
	getTenor(tenorInput, bungaInput);
	getYear(yearInput);
}

int main(){
	getInput();
	return 0;
}


