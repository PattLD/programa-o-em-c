#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	//permite usar acento
	//Para funcionar: escrever ">encoding" -> save -> Westen (ISO 8859-1)
	printf("Olá mundo. \n");	
	system("pause");
	return 0;
}

