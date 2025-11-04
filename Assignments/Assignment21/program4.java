

class Logic
{
    public void CountFactors(int iNo)
    {
        int iCnt=0;
       int CounT=0;
        
        for(iCnt=1;iCnt<=iNo;iCnt++)
    {
       
        if(iNo%iCnt==0)
        {
                CounT++;
        }
    }

System.out.println("Factors of:"+CounT);
    }
        

}
class program4
{
    static public void main(String arge[])
    {
        Logic lobj=new Logic();
        lobj.CountFactors(20);
    }
}
