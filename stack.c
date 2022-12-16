#include<stdio.h>
int top=-1,stack[50],n,i,data,ch,c;
int isempty();
int isfull();
void push();
void display();
void pop();
int peak();
int main()
{
  char c;
  printf("enter the size of the stack: ");
  scanf("%d",&n);
  do
  {
  printf("\n Menu\n 1.Push to stack\n 2.pop from stack \n 3.Display \n 4.Display peak\n");
  printf("\n Enter your choice");
  scanf("%d",&ch);
  switch(ch)
    {
      case 1:push();
             break;
      case 2:pop();
             break;
      case 3:display();
             break;
      case 4:peak();
             break;
      Default:
            printf("wrong choice");
    }
 printf("\n do you want to continue? (y/n)");
 scanf("%s",&c);
 }
 while(c=='y');
}
int isempty()
 { 
    if(top==-1)
      return 1;
    else
      return 0;
  }
int isfull()
  {
     if(top==n-1)
       return 1;
     else
       return 0;
   }
void push()
  {
    if(!isfull())
      { 
        printf("\nenter elements: ");
         {
           scanf("%d",&data);
           top=top+1;
           stack[top]=data;
           }
       }
   else
      {
        printf("\n overflow");
      }
   }
void display()
{ 
  if(top>-1)
    {
      for(i=top;i>-1;i--)
       {
         printf("%d\t",stack[i]);
        }
     }
else
     {
       printf("\n underflow");
     }
 }
void pop()
{ 
  if(!isempty())
    {
      data=stack[top];
      top=top-1;
      printf("\n popped elements %d \n",data);
     }
 else
     {
       printf("\n underflow");
     }
 }
int peak()
{ 
   data=stack[top];
  printf("\n top stack element is: %d\n",data);
 }                                         
      
  
       
      
