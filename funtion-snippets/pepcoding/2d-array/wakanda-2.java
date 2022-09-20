import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc =new Scanner(System.in);
        
        int n = sc.nextInt();
        
        int arr[][] = new int[n][n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j] = sc.nextInt();
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0,k=i;j<n&&k<n;j++,k++){
                System.out.println(arr[j][k]);
            }
        }
    }

}