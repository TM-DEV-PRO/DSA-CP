import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    long n = sc.nextLong();
    int x = (int)Math.floor(Math.log10((double)n))+1;
    System.out.print(x);
    
   }
  }