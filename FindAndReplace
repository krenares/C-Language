#include<stdio.h>
#include<string.h>

void replace(char string[],char find[],char new[])
{
int stringLenth, findLen, newLen;
int i=0, j, k;
int flag=0, start, end;
stringLenth = strlen(string);
findLen = strlen(find);
newLen = strlen(new);
for(i=0; i<stringLenth; i++)
{
flag = 0;
start = i;
for(j=0; string[i] == find[j]; j++,i++)
if(j == findLen-1)
flag = 1;
end = i;
if(flag == 0)
i -= j;
else
{
for(j=start; j<end; j++)
{
for(k=start; k<stringLenth; k++)
string[k] = string[k+1];
 stringLenth--;
 i--;
 }
for(j=start; j<start+newLen; j++)
{ for(k=stringLenth; k>=j; k--)
string[k+1] = string[k];
 string[j] = new[j-start];
stringLenth++;
i++;}}}}
int main()
{
char string[100], find[100], new[100];
printf("Initial String: ");
scanf("%[^\n]%*c", string);
printf("Which string would you like to replace? ");
scanf("%[^\n]%*c", find);
printf("String to replace with: ");
scanf("%[^\n]%*c", new);
replace(string, find, new);
printf("The string after replacing : %s\n",string);
return 0;
}
