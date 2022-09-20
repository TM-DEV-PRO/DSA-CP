import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
   Scanner sc =new Scanner(System.in);
     int n1 = sc.nextInt();
     int [] arr1 = new int[n1];
   
     for(int i=0;i<n1;i++)
        arr1[i] = sc.nextInt();
        
     
        
     int n2 = sc.nextInt();
     int [] arr2 = new int[n2];
    
     for(int i=0;i<n2;i++)
        arr2[i] = sc.nextInt();
        
     int carry = 0;
     
     int[] arr = new int[n2];
     
     int i1 = n1-1, i2 = n2-1;
     
       while( i2 >=0){
         int x = i1 >= 0 ? arr1[i1] : 0;
         int curr;
         arr2[i2]-=carry;
         if(arr2[i2]>=x){
            curr = arr2[i2] - x;
            carry=0;
         }
         
         else{
            carry=1;
            curr = (arr2[i2]+(10*carry)) - x;
         }
         
         arr[i2]=curr;
         i1--;
         i2--;
           
       }
        int k = 0;
        while (arr[k] == 0)
            ++k;
   
        while (k < n2)
            	System.out.println (arr[k++]);
    
    
 }

}