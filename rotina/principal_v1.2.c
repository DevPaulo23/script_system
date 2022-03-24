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

		// cria macros 
		if (_comand_hello_world == '@macro')
		{

			char _macroname[1000];
			fgets(_macroname, 1000, stdin);
#define _macroname
		}
		if (_comand_hello_world == '@type_macro')
		{
			char _typedef_macro[1000];
			fgets(_typedef_macro, 1000, stdin);
#typdef _typdef_macro
		}

		if (_comand_hello_world == '@un_macro')
		{
			char _undef_new[1000];
			fgets(_undef_new, 1000, stdin);
#undef _undef_new
		}

	}
	return 0;
}
