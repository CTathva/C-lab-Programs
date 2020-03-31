//	Write functions to implement string operations such as compare, concatenate, string
//	length. Convince the parameter passing techniques

#include<stdio.h>
int my_strlen(char str[])
{
	int i=0;
	while (str[i]!='\0')
 		i++;
	return i;
}

int my_strcmp(char str1[],char str2[])
{
	int i;
	i=0;
	while (str1[i]==str2[i])
	{
		if (str1[i]=='\0') 
			break;
		i++;
	}
	return str1[i]-str2[i];
}
void my_strcat(char str1[], char str2[])
{
	int i,j;
	i=0;
	while (str1[i]!='\0') 
		i++;
	j=0;
	while (str2[j]!='\0')
	{
		str1[i++]=str2[j++];
	}
	str1[i++]='\0';
	printf("concatinated string= %s", str1);
}
void main()
{
	char str1[]="RAMA";
	char str2[]="KRISHNA";
	int res1,res2;
	res1=my_strlen(str1);
	printf("the length of the string1=%d\n", res1);
	res2=my_strcmp(str1,str2);
	if (res2==0)
		printf("%s is equal to %s\n",str1,str2);
	else if (res2>0)
		printf("%s is greater than %s\n",str1,str2);
	else
		printf("%s s is less than %s\n",str1,str2);
	my_strcat(str1,str2);
}
