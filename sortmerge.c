#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10],b[10],c[10],na,nb,i,j,k;
printf("enter the limit of first element");
scanf("%d",&na);
printf("enter the sorted elements");
for(i=0;i<na;i++)
 {
  scanf("%d",&a[i]);
 }  
printf("enter the limit of second number");
scanf("%d",&nb);
printf("enter the sorted elements");
for(i=0;i<nb;i++)
 { 
   scanf("%d",&b[i]);
 }
 i=0;
 j=0;
 k=0;
 while(i<na&&j<nb)
  {
    if(a[i]<b[j])
      {
        c[k]=a[i];
        i++;
        k++;
       }
  else
      {
        c[k]=b[j];
        j++;
        k++;
      }
  }
if(i>=na)
  {
    while(j<nb)
      {
        c[k]=b[j];
        j++;
        k++;
       }
   }
if(j>=nb)
  {
    while(i<na)
     { 
       c[k]=a[i];
       i++;
       k++;
      }
   }
printf("\n merged elements: ");
for(k=0;k<(na+nb);k++)
 { 
   printf("%d\t",c[k]);
 }
} 
                  
                   

