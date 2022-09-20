import java.util.*;
    
    public class Main{
    
    public static int gcdNum(int a,int b){
        if(b==0)
            return a;
        return gcdNum(b,a%b);
    }
    public static void main(String[] args) {
      Scanner sc= new Scanner(System.in);
      
      int a=sc.nextInt();
      int b=sc.nextInt();
      int gd;

      gd=gcdNum(b,a);
        
      int lm = (a*b)/gd;
      
      System.out.println(gd);
      System.out.println(lm);
     }
    }