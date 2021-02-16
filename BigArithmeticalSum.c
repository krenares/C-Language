#include<stdio.h>
void bigSumArithematic(int *a,int *b,int *c,int size1,int size2,int *size3)
{

    int i=size1-1;
    int j=size2-1;
    int carry=0;
    int index=0;
    
    while(i>=0 && j>=0)
    {
    int sum=a[i]+b[j]+carry;
        carry=0;
        c[index]=sum%10;
        index++;
        carry=sum/10;
        i--;
        j--;
    }
  
    while(i>=0)
    {
        int sum=a[i]+carry;
        carry=0;
        c[index]=sum;
        index++;
        i--;}
        while(j>=0){
  int sum=b[j]+carry;
  carry=0;
  c[index]=sum;
  index++;
  j--;}if(carry){
c[index]=1;
index++; }
*size3=index;}
int  main()
{int a[20];
int b[20];
int c[22];
int n1,n2,n3;
printf("How many digits will have the first number? ");
scanf("%d",&n1);
printf("How many digits will have the second number? ");
scanf("%d",&n2);
printf("First long integer\n");
for(int i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("Second long integer\n");
for(int i=0;i<n2;i++)
scanf("%d",&b[i]);
bigSumArithematic(a,b,c,n1,n2,&n3);
printf("\nBig Sum = ");
 for(int i=n3-1;i>=0;i--)
printf("%d",c[i]);
}
