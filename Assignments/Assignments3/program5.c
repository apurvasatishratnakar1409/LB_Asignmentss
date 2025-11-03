#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FAlSE 0

BOOL CheckVowel(char cValue)
{
    if(cValue == 'A'||cValue == 'E'||cValue == 'I'||cValue == 'O'||cValue == 'U'||
        cValue == 'a'|| cValue == 'e'||cValue == 'i'||cValue == 'o'||cValue == 'u')
    {
        return TRUE ;
    }
    else
    {
        return FAlSE;

    }
}
int main()
{
    char cValue ='\0';
    BOOL bRet = FAlSE;

    printf("Enter character\n");

    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet== TRUE)
    {
        printf("it is a vowel:\n");

    }
    else
    {
        printf("it is not vowel");

    }
    return 0;
}
