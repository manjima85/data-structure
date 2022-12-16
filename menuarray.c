#include<stdio.h>
int main()
{
int ar[20],n,i,ch;
void insert(int ar[],int n);
void delete(int ar[],int n);
void display(int ar[],int n);
void search(int ar[],int n);
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the array elements: ");
for(i=0;i<n;i++)
{
   scanf("%d",&ar[i]);
}
do
{
printf("\n menu:\n 1.insert, 2.delete,3.display,4.search");
printf("\n enter your choice: ");
scanf("%d",&ch);
switch(ch)
 {
    case 1:insert(ar,n);
        break;
    case 2:delete(ar,n);
        break;
    case 3: display(ar,n);
        break;
    case 4:search(ar,n);
        break;
    default:
        printf("wrong choice");
 }
 } while(ch<5);  
}

void insert(int ar[],int n)
{
  int ele,loc,i;
   printf("enter the element to be inserted: ");
   scanf("%d",&ele);
   printf("enter the location for the element: ");
   scanf("%d",&loc);
   for(i=n-1;i>=loc-1;i--)
   {
     ar[i+1]=ar[i];
    }
   ar[loc-1]=ele;
   n=n+1;
 printf("\narray after insertion :");
  for(i=0;i<n;i++)
    {
       printf("%d\t",ar[i]);
    }
}    
void delete(int ar[],int n)
{
int i,ele,loc;
 if(n==0)
   {
     printf("array is empty");
   }
else
   { 
     printf("enter a valid position to be deleted:\n");
     scanf("%d",&loc);
   }
ele=ar[loc-1];
printf("deleted element : %d",ele);
for(i=loc-1;i<n;i++)
   {
     ar[i]=ar[i+1];
   }
n=n-1;
printf("\n array after deletion:\n");
for(i=0;i<n;i++)
   {
     printf("%d\t",ar[i]);
   }
}     
void display(int ar[],int n)
{
  int i;
  printf("\n display array elements:");
  for(i=0;i<n;i++)
    { 
       printf("%d\t",ar[i]);
    }
}
void search(int ar[],int n)
{
 int ele,loc,i,flag=0;
 printf("\n enter the element to be searched");
 scanf("%d",&ele);
 for(i=0;i<n;i++)
   {
     if(ele==ar[i])
       {
         flag=1;
         loc=i+1;
         break;
        }
    }
if(flag==1)
 { 
   printf("element found at location %d",loc);
 }
else
 {
   printf("element not found\n");
 }
}                               
         
     
                      
