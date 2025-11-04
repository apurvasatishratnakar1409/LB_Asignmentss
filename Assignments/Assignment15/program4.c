#include<stdio.h>
void DigitMult(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    int iFreq=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iFreq=iFreq*iDigit;
        iNo=iNo/10;
        iCnt++;
       
    }
    printf("%d",iFreq);

}

int main()
{
    int iValue=0;
    printf("Enter Number:");
    scanf("%d",&iValue);
    DigitMult(iValue);
    return 0;
}
