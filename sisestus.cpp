#include <iostream>


int main(void)
{
	char nimi[21];
	int vanus, aasta; 
	printf("Tere!\n");
	printf("Mina olen sinu raal. Mis on sinu nimi?\n");
	scanf("%s", nimi);
	printf("Vaga meeldiv! MIs aastal sa sündisid?\n");
	scanf("%d",&aasta);
	
	printf("\nTere %s, sa oled %d aastat vana\n", nimi, vanus);
	
	getchar();




	return 0;
}
