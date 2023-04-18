#include<stdio.h>
#include<string.h>
int main()
{
char str1[50],ch;
strcpy(str1,"Procura uma letra inicial de caracteres");
ch='l';
printf("%ld",-(str1-strchr(str1,ch)));
return 0;
}
