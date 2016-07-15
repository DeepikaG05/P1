#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
char *rev;
printf("enter the name");
scanf("%s",str);
rev=strrev(str);
printf("\n the reverse string is:%s",rev);
return 0;
}
