#include<stdio.h>
#include<string.h>
#include<limits.h>
int main( void )
{
    char s1[17];
    char s2[] = "Copy this string";

    memcpy(s1,s2,17);
    printf("After s2 is copied into s1 with memcpym,\n"
           "s1 contains %s\n",s1,
           "s2 contains %s\n",s2);

    char x[] = "Home Sweet Home";
    printf("\nbefore memmove: %s\n",x);
    printf("after: %s",memmove(x,&x[5],10));

    char st[] = "ABCDEFG";
    char s[] = "ABCDXYZ";

    printf("\n\n%s%s\n%s%s\n%s%d\n%s%d\n%s%d\n",
           "s1 = ",st,"s2 = ", s,
           "memcmp(s1, s2, 4) = ", memcmp(st, s, 4),
           "memcmp(s1, s2, 7) = ", memcmp(st, s, 7),
           "memcmp(s2, s1, 7) = ", memcmp(s, st, 7));

    const char *S = "This is a string";

    printf("\n%s\'%c\'%s\"%s\"\n",
           "The remainder of S after character ",'r',
           " is found is \n", memchr(S,'r',16));

    printf( "%s\n", strerror( 2 ) );

    const char *string1 = "abcdefghijklmnopqrstuvwxyz";
    const char *string2 = "four";
    const char *string3 = "Boston";


    return 0;
}
