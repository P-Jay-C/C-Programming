#include<stdio.h>

int main( void )
{
    char s[80];
    int x;
    double y;

    printf("Enter and integer and a double:\n");
    scanf("%d%lf",&x, &y);

    sprintf(s, "integer:%6d\ndouble:%8.2f",x,y);

    printf("%s",s);
}
