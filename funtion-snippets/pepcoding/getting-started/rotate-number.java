import java.util.*;
   
   public class Main{
   
   public static void rvrse(int[] arr,int i,int j){
       while(i<j){
           int temp = arr[j];
           arr[j] = arr[i];
           arr[i] = temp;
           i++;
           j--;
       }
   }
   public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);
     
     int n = sc.nextInt();
     int k = sc.nextInt();
     
     int x = Math.abs(k);
     
    
     int d = (int)Math.floor(Math.log10((double)n))+1;
      x = x%d;
     int[] arr = new int[d];
     
     int t = n,j=0;
     while(t>0){
        arr[j] = t%10;
        t = t/10;
        j++;
     }
     
     if(k>0){
        rvrse(arr,0,x-1);
        rvrse(arr,x,d-1);
     }
     
     else{
        
        rvrse(arr,d-x,d-1);
        rvrse(arr,0,d-x-1);
     }
     
     for(int i=0;i<d;i++)
        System.out.print(arr[i]);
     
     // better solution

     int d = (int)Math.floor(Math.log10(n))+1;
     
     k = k%d;
     
     if(k<0)
        k+=d;
     
     int div = (int)Math.pow(10,k);
     
     int mul = (int)Math.pow(10,d-k);
     
     int quo = n/div;
     
     int rem = n%div;
     
     int res = rem*mul + quo;
     
     System.out.print(res);
     
    }
   }