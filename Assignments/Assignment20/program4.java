
class Logic
{
    public void FindLargestNumber(int iNo)
    {

        int iGreater=0;
        while(iNo!=0)
        {
            int iDigit=iNo%10;
           if(iDigit>iGreater)
           {
             iGreater=iDigit;
           }
             iNo=iNo/10;
        }
        System.out.println("Larger digit is:"+iGreater);
    }
        

}
class program4
{
    static public void main(String arge[])
    {
        Logic lobj=new Logic();
        lobj.FindLargestNumber(83429);
    }
}
