// Function isspace, iscntrl, isprint and isgraph

#include<stdio.h>
#include<ctype.h>

int main( void )
{
    printf("%s\n%s%s%s\n%s%s%s\n%s%s",
           "According to isspace: ",
           "Newline ", isspace( '\n') ? "is a ": "is not a ", "whitespace character",
           "Horizontal tab ", isspace('\t') ? "is a ": "is not a ", "whitespace character",
           isspace('%')? "% is a ": "% is not a ", "white character.");

           puts("");
           puts("");
    printf("%s%s%s%s\n\n","According to iscntrl: ", "Newline ",iscntrl('\n')? "is a ": "is not a","control character");
    printf("%s\n%s%s\n\n","Dollar sign ", iscntrl('$') ? "is a" : "is not a ","control character");

    printf("%s\n\%s%s\n%s%s\n%s%s\n\n","According to ispunct: ",
           ispunct(';') ? "; is a ": "; is not ","a punctuation character.",
           ispunct('Y') ? "Y is a " : "Y is not a ","a punctuation character",
           ispunct('#') ? "# is a " : "# is not a ","a punctuation character"
    );

    printf("%s\n%s%s\n%s%s\n","According to is isprint: ",
           isprint('$')? "$ is a ": "$ is not a ", "printing character",
           isprint('\a') ? "Alert is a": "Alert is not a ","Printing Character"
           );


    return 0;
}


