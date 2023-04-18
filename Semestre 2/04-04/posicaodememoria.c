#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    
system("@cls||clear");
 char str1[40],str2[40];
 char *ptr;
 strcpy(str1,"Eu adoro programar em C");
 strcpy(str2,"programar");
 ptr = strstr(str1, str2);
 printf("A repeticao e: %s\n", ptr);
}