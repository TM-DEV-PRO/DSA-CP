import java.util.*;

public class Main{

public static void main(String[] args) {
  // write your code here
  Scanner sc = new Scanner(System.in);
  
  int n = sc.nextInt();
  
  int d = (int)Math.floor(Math.log10((double)n))+1;
  
  int[] arr = new int[d];
  int i=1;
  while(n>0){
      arr[(n-1)%10]=i;
      i++;
      n=n/10;
  }
  
  for(int j=d-1;j>=0;j--)
    System.out.print(arr[j]);
 

 // Better Solution

 int res=0;
  int i=1;
  while(n>0){
      int r = n%10;
      res+= (i*(int)Math.pow(10,r-1));
      i++;
      n=n/10;
  }
  

  System.out.print(res);
}