#include <stdio.h>
main()
{
	int base;
	int altezza;
	int area;
	area=base*altezza;
	printf("\nCalcolo dell'area di un rettangolo");
	printf("\n Scrivi il valore della base");
	scanf("%d", &base);
    printf("\n Scrivi il valore dell'altezza");
    scanf("%d",&altezza);
    area=base*altezza;
    printf("\n Risultato=%d%" ,area);
}



