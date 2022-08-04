#include <stdio.h>
 
int main()
{
    char* a = "hello";
    char b[] = "hello";
    a = a+1;
    printf("a = %s\n", a);
    printf("b = %s\n", b);
    return 0;
}