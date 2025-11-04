#include<stdio.h>

int FactDiff(int iNo)
{
    int i=0 ;
 int isum = 0;

    for(i=1,isum=1;i<=iNo;i++)
    {
        if((iNo % i) != 0)
        {
            isum = isum-i;
        }
    }
    return isum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;

}
