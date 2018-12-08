#include "task5.h"

void split(char ***result, int *N, char *buf, char ch) {
	int len = strlen(buf);
	char * tmp = new char[len];	//максимально возможная подстрока
	int k = 1;	//индекс массива result
	for (int i = 0; i < len; i++)
		if (buf[i] == ch)
			(*N)++;
	(*N)++;
	(*result) = new char* [*N];	//создание *N строк в массиве result
	(*result)[0] = tmp;

	for (int i = 0; buf[i]!='\0'; i++){
		tmp[i] = buf[i];
		if (buf[i] == ch) {
			tmp[i] = '\0';
			(*result)[k] = tmp+i+1;
			k++;
		}
	}
	tmp[len] = '\0';
}