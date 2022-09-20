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
     
     ArrayList<Integer> alist = new ArrayList();
     
     int i1 = n1-1, i2 = n2-1;
     
     while(i1>=0 && i2 >=0){
         int curr = (arr1[i1]+arr2[i2]+carry)%10;
         carry = (arr1[i1]+arr2[i2]+carry)/10;
         alist.add(curr);
         i1--;
         i2--;
     }
     
     while(i1>=0){
        int curr = (arr1[i1]+carry)%10;
        carry = (arr1[i1]+carry)/10;
        alist.add(curr);
        i1--;
     }
     
    while(i2>=0){
        int curr = (arr2[i2]+carry)%10;
        carry = (arr2[i2]+carry)/10;
        alist.add(curr);
        i2--;
    }
    
    if(carry!=0)
        alist.add(carry);
        
    for(int i=alist.size()-1;i>=0;i--){
        System.out.println(alist.get(i));
    }
   
 }

}