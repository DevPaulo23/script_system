#include <stdio.h>
int main(void)
{
	int _public_loop;
	while (_public_loop)
	{
		// instrução para escrever uma string na tela 
		char _comand_hello_world;
		scanf("%s", &_comand_hello_world);
		if (_comand_hello_world == 'Sytem.Written:')
		{
			char _finaly_string[10000] (int _finaly_string);
			fgets(_finaly_string, 10000, stdin);
			printf("%s", _finaly_string);
		}
		// instruçoes padrão do sistema 

		if (_comand_hello_world == 'system.date')
		{
			system("date");
		}

		if (_comand_hello_world == 't- c')
		{
			system("time");
			printf("time of compiling system");
		}
		// instrução para criar novo arquivo 

		if (_comand_hello_world == 'mkFile:')
		{
			char namefile[30];
			scanf("%s", &namefile);
			FILE *newFile;
			newFile = fopen(namefile, "w");

		}
	}
	return 0;
}
