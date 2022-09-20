import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int chess[][] = new int[n][n];
        printNQueens(chess,"",0);
    }
    
    
    public static boolean isSafe(int[][] chess,int r, int c){
        for(int i=r-1;i>=0;i--){
            if(chess[i][c]==1)
                return false;
        }
        
        for(int i=r-1,j=c+1;i>=0 && j<chess[0].length;i--,j++){
            if(chess[i][j]==1)
                return false;
        }
        for(int i=r-1,j=c-1;i>=0 && j>=0;i--,j--){
            if(chess[i][j]==1)
                return false;
        }
        return true;
        
    }
    
    
    public static void printNQueens(int[][] chess, String qsf, int row) {
        if(row==chess.length){
            System.out.println(qsf+'.');
            return;
        }
        
        for(int i=0;i<chess[0].length;i++){
            if(isSafe(chess,row,i)){
                chess[row][i] = 1;
                printNQueens(chess,qsf+row+'-'+i+','+' ',row+1);
                chess[row][i] = 0;
            }
        }
    }
}