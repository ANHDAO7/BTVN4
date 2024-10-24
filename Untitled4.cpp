#include <stdio.h>
void swap( int a, int b)
{ int t;
t = a;
a = b;
b = t;
printf("In swap: value:%d\n", a);
printf("In swap: value:%d\n", b);
printf("In swap: value:%d\n", t);
}
int main()
{ int x = 5, y = 7;
printf("value x = :%d\n", x);
printf("value y = %d\n", y);
swap (x, y);
printf("After swapping x and y\n");
printf("x=%d, y=%d\n", x, y);
getchar();
return 0;
}






