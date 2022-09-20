import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    int ind = -1;
    
    Scanner sc = new Scanner(System.in);
    
    int n =sc.nextInt();

    int[] arr = new int[n];
    
    for(int i=0;i<n;i++){
        arr[i] = sc.nextInt();
    }
    
    int d = sc.nextInt();
    
    for(int i=0;i<n;i++){
        if(arr[i]==d){
            ind = i;
            break;
        }
    }
    
    System.out.print(ind);
     
 }

}