import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int m = scn.nextInt();
    int arr[][] = new int[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            arr[i][j] = scn.nextInt();
    }
    // better
    int i =0, j=0;

    int r=0,c=0;
    int dir = 0;
    while(i<n && i>=0 && j<m && j>=0){
        r=i,c=j;
        dir = (dir+arr[i][j])%4; 
        if(dir==0)
            j++;
        else if(dir==1)
            i++;
        else if(dir==2)
            j--;
        else
            i--;
    }

    //int sr=0,sc=0, er=0, ec=m-1;
    // boolean exit = false;
    // int r = -1,c = -1;
    // while(!exit){
    //     boolean turn = false;
    //     for(int i=sr;i<=er && !turn;i++){
    //         for(int j=sc;j<=ec;j++){
    //             if(arr[i][j]==1){
    //                 turn = true;
    //                 sr = i+1;
    //                 er = n-1;
    //                 sc = j;
    //                 ec = j;
    //                 break;
    //             }
                
    //             r=i;
    //             c=j;
    //         }
    //     }
    //     if(!turn)
    //         break;
    //     else
    //         turn = false;
    //     for(int i=sr;i<=er && !turn;i++){
    //         for(int j=sc;j<=ec;j++){
    //             if(arr[i][j]==1){
    //                 turn = true;
    //                 sr = i;
    //                 er = i;
    //                 sc = j-1;
    //                 ec = 0;
    //                 break;
    //             }
                
    //             r=i;
    //             c=j;
                
    //         }
    //     }
        
    //     if(!turn)
    //         break;
    //     else
    //         turn = false;
            
    //     for(int i=sr;i>=er && !turn;i--){
    //         for(int j=sc;j>=ec;j--){
    //             if(arr[i][j]==1){
    //                 turn = true;
    //                 sr = i-1;
    //                 er = 0;
    //                 sc = j;
    //                 ec = j;
    //                 break;
    //             }
                
    //             r=i;
    //             c=j;
                
    //         }
    //     }
        
    //     if(!turn)
    //         break;
    //     else
    //         turn = false;
        
             
    //     for(int i=sr;i>=er && !turn;i--){
    //         for(int j=sc;j>=ec;j--){
    //             if(arr[i][j]==1){
    //                 turn = true;
    //                 sr = i;
    //                 er = i;
    //                 sc = j+1;
    //                 ec = m-1;
    //                 break;
    //             }
                
    //             r=i;
    //             c=j;
                
    //         }
    //     }
        
    //     if(!turn)
    //         exit = true;
    
        
    // }
    
    System.out.print(r + "\n" + c);
    
    
    }

}