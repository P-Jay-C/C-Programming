#include<stdio.h>

int main( void )
{
    printf( "%d\n%d\n", 786, -786);
    printf( "%+d\n%+d\n", 786, -786);

    printf("\n");
    printf("% d\n% d\n", 547,-547);

    printf("\n");
    printf("\n");
    int c = 1427;
    double p = 1427.0;

    printf("%#o\n",c);
    printf("%#x\n",c);
    printf("%#x\n",c);
    printf("\n%g\n",p);
    printf("%#g\n",p);

    printf("\n");
    printf("\n");

    printf("%+09d\n", 452);
    printf("%09d\n", 452);

    return 0;
}
