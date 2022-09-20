import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
  int mx = -1 ;
  int mn = 1000000001;
  
  Scanner sc = new Scanner(System.in);
  
  int n = sc.nextInt();
  
  for(int i=1;i<=n;i++){
     int x = sc.nextInt();
     if(x>mx)
        mx=x;
     if(x<mn)
        mn=x;
  }
  
  System.out.print(mx-mn);
 }

}