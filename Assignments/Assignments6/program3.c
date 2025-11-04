#include<stdio.h>
#include<stdbool.h>

bool CheckEqual( int iNum1,int iNum2 )
{
    if (iNum1 == iNum2)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()

{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter two number:\n");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = CheckEqual(iValue1 , iValue2);

    if(bRet == true)
    {
        printf("Equal:\n");
    }
    else
    {
        printf("Not equal:\n");

    }
    return 0 ;
}
