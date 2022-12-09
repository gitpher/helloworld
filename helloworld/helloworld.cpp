#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	char arr1[12] = { "I am a boy" };
	char arr2[12] = { "Hello world" };
	char arr3[12] = { "CLE inc." };
	char arr4[12] = { "Junwoo" };
	
	char* arr5[4] = { arr1, arr2, arr3, arr4 };
	for (int i = 0; i < 4; i++) {
		printf("%s\n", arr5[i]);
	}




	return 0;
}