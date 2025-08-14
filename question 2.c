#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter number a\n");
scanf("%d", &a);

printf("Enter number b\n");
scanf("%d", &b);

printf("Enter number c\n");
scanf("%d", &c);

if (a>b && a>c)
{
printf("a is the largest\n");
}

else if (b>a && b>c)
{
printf("b is the largest\n");
}

else if (c>a && c>b)
{
printf("c is the largest\n");
}

if (a<b && a<c)
{
printf("a is the smallest\n");
}

else if (b<a && b<c)
{
printf("b is the smallest\n");
}

else
{
printf("c is the smallest\n");
}
}
