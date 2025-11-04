
class Logic
{
    public void DisplayFactors(int iNo)
    {
        int iCnt=0;
       
        
        for(iCnt=1;iCnt<=iNo;iCnt++)
    {
       
        if(iNo%iCnt==0)
        {
         System.out.println("Factors of:"+iCnt);
        }
    }

    }
        

}
class program3
{
    static public void main(String arge[])
    {
        Logic lobj=new Logic();
        lobj.DisplayFactors(12);
    }
}
