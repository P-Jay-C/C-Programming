#include<stdio.h>

int main(void)
{
     char sentence[80];
     int i, vowels = 0, consonants = 0, special = 0;

     printf("Enter a sentence: ");
     gets(sentence);

     for(i = 0; sentence[i] != '\0'; i++)
     {
          if( (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u'||
               sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')){
                    vowels++;
               }
          else
               consonants++;

          if( sentence[i] == '\t' || sentence[i] == ' ' || sentence[i] == '\0')
               special++;
     }

     consonants = consonants - special;
     printf("There are %d vowels in the sentence\nAnd %d consonants in the sentence",vowels,consonants);

     return 0;
}
