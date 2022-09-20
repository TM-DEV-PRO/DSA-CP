import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
     int f0=-1, f1=1;
     Scanner sc = new Scanner(System.in);
     
     int n = sc.nextInt();
     
     while(n>0){
        int x = f0 + f1;
        System.out.println(x);
        f0=f1;
        f1=x;
        n--;
     }
   }
  }