#include <stdio.h>
int main()
{
int x, *r, **t;
r= &x;
t = &r;
x = 34;
printf("\n%d\n", &x);
printf("\n%d\n", x);
printf("\n%d\n", &r);
printf("\n%d\n", r);
printf("\n%d\n", *r);
printf("\n%d\n", &t);
printf("\n%d\n", t);
printf("\n%d\n", *t);
return(0);
}
