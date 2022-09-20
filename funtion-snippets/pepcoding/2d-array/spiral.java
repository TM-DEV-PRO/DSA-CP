import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    int arr[][] = new int[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            arr[i][j] = sc.nextInt();
    }
    int tr = 0, br = n-1, lc = 0, rc = m-1;
    int count = 0;
    while(count<(n*m)){
        for(int i = tr;i<=br && count<(n*m);i++){
            System.out.println(arr[i][lc]);
            count++;
        }
        lc++;
        
        for(int i = lc;i<=rc && count<(n*m);i++){
            System.out.println(arr[br][i]);
            count++;
        }
        br--;
        
        for(int i = br;i>=tr && count<(n*m);i--){
            System.out.println(arr[i][rc]);
            count++;
        }
        rc--;
        
        for(int i = rc;i>=lc && count<(n*m);i--){
            System.out.println(arr[tr][i]);
            count++;
        }
        tr++;
        
    }
    
    
    }

}