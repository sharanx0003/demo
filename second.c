#include<stdio.h>
int main()
{
int a,b,choice;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
printf("enter the choice:");
scanf("%d",&choice);
printf("1 add\n");
printf("2 sub\n");
printf("3 mul\n");
printf("4 div\n");
printf("5 mod\n");
switch(choice)
{
case 1:
{
   int c=a+b;
    printf("Result: %d\n", c);
    break;
}
case 2:
{
   int c=a-b;
    printf("Result: %d\n", c);
    break;
}
case 3:
{
   int c=a*b;
    printf("Result: %d\n", c);
    break;
}
case 4:
{
   int c=a/b;
    printf("Result: %d\n", c);
    break;
}
case 5:
{
   int c=a%b;
    printf("Result: %d\n", c);
    break;
}     
default:
{
    printf("Invalid choice\n");
}

}
return 0;
}