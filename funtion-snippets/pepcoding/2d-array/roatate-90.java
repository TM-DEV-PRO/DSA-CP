import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        
        int N = sc.nextInt();
        
        int a[][] = new int[N][N];
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                a[i][j] = sc.nextInt();
            }
        }
        
        for (int i = 0; i < N / 2; i++) { 
            for (int j = i; j < N - i - 1; j++) { 
                
                int temp = a[i][j]; 
                a[i][j] = a[N - 1 - j][i]; 
                a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j]; 
                a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i]; 
                a[j][N - 1 - i] = temp; 
            } 
        }
        
        display(a);
    }

    public static void display(int[][] arr){
        for(int i = 0; i < arr.length; i++){
            for(int j = 0; j < arr[0].length; j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }

}