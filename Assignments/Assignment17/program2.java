
class Logic
{
    public void SumofDigit(int iNo)
    {
       int iDigit=0;
       int iCount=0;
       int itemp=iNo;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iCount=(iCount*10)+iDigit;
            iNo=iNo/10;
            
        }

        if(itemp==iCount)
        {
        System.out.println("It is palindrome");
        }
        else  
        {
        System.out.println("It is not palindrome");
        }

    }
}
class program2
{
    public static void main(String args[])

    {
        Logic lobj=new Logic();
        lobj.SumofDigit(121);

    }

}
