import java.util.*;
  
  public class Main{
 
 
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int numberOfBulbs = sc.nextInt();
     
  
 
     
    int root = (int) Math.sqrt(numberOfBulbs); 
    for (int i = 1; i < root + 1; i++) 
    { 
        System.out.println(i * i); 
    } 
 

   }
  }