#include<stdio.h>
int main ()
{
    char alph,vowel,consonat;

    printf("Enter The alphabet =");
    scanf("%c",&alph);
    if((alph=='a')||(alph=='e')||(alph=='i')||(alph=='o')||(alph=='u')||(alph=='A')||(alph=='E')||
       (alph=='I')||(alph=='O')||(alph=='U'))
    {
        printf("The alphabet is vowel",alph);
    }
    else
    {
        printf("The alphabet is consonat",alph);
    }
}
