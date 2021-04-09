//Krenare Syla
//Systems Programming
//Lab 8

#include "stdio.h"
#include "stdlib.h"

struct Node{
char information;
struct Node *Next;};
typedef struct Node *nodeptr;
struct Node* getNode()
{
struct Node *NodeNew = (struct Node*)malloc(sizeof(struct Node));
return NodeNew;
}
void NodeFree(nodeptr *k)
{
free(k);
}
void push(nodeptr *k, char x)
{
nodeptr num = *k;
*k = getNode();
(*k)->information = x;
(*k)->Next = num;
}
char pop_k(nodeptr *k)
{
nodeptr num = *k;
char val = 0;
if(num == NULL)
{
return val;}
if(num -> Next == NULL)
{
val = num->information;
*k = NULL;
return val;}
else
   {
while((num->Next)->Next != NULL)
  {
num = num-> Next;
}
val = (num->Next) -> information;
num -> Next = NULL;
free(num -> Next);
return val;}}

char pop_stack(nodeptr *s)
{
nodeptr num = *s;
char val = 0;
if(num == NULL){
return val;
}else
{
val = num -> information;
*s = num -> Next;
return val;
}
}
int main(){
nodeptr kueue;
nodeptr Stack;
char str[32];
char bar,num;
int i;
kueue = 0;
Stack = 0;
printf("%s\n","Enter your ID");
scanf("%s",str);
   i = 0;
  while((bar = str[i]) != '\0')
{
push(&kueue, bar);
push(&Stack, bar);
i++;}
i = 1; 
bar = 1;
num = 1;
while(bar != 0 && num != 0 && i == 1)
{bar = pop_stack(&Stack);
num = pop_k(&kueue);
if(bar != num)
i = 0;
}
if(i == 1)
printf("ID is a palindrome\n");
else
printf("ID is not a palindrome\n");
return 0;
}
