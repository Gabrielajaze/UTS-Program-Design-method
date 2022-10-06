#include <stdio.h>
int main(){
	float bunga, depositoTotal, deposito, depositoAwal, totalBunga, month;
	int repetition, tenor, year;
	
	scanf("%f/n", &deposito);
	scanf("%d/n", &tenor);
	scanf("%f/n",&month);
	scanf("%d/n", &year);
	depositoAwal = deposito;
	repetition = 12/tenor * year;
	//printf("repetition = %d\n",repetition);
	
	for (int i = 0; i<repetition; i++){
			printf("deposito = %f\n",deposito);
			bunga = deposito * month/12 * tenor;
			depositoTotal = deposito + bunga;
			printf("bunga = %f\n",bunga);
			totalBunga = depositoTotal- depositoAwal;
			printf("Total bunga deposito is %f",totalBunga);
			deposito = depositoTotal;
			printf("deposito Total = %f\n",depositoTotal);
	}
	printf("Total bunga deposito is %f",totalBunga);
	return 0;
}
