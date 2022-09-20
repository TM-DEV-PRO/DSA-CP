import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int sourceBase = scn.nextInt();
      int  destBase= scn.nextInt();
      int sb = getValueIndecimal(n,sourceBase);
      int db = getValueInBase(sb,destBase);
      System.out.print(db);
   } 
   
   public static int getValueIndecimal(int n, int b){
      int res = 0;
      int p=1;
      while(n>0){
          int d = n%10;
          res+=d*p;
          p*=b;
          n=n/10;
      }
      
      return res;
   }
   
    public static int getValueInBase(int n, int b){
        int res = 0;
        int p=1;
       
       while(n>0){
           
           res = res + (n%b)*p;
           p*=10;
           n=n/b;
       }

       
       return res;
   }
  }