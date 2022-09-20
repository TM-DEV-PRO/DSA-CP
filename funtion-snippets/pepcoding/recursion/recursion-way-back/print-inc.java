import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        
        int n;
        
        n=sc.nextInt();
        printIncreasing(n);
    }

    public static void printIncreasing(int n){
        if(n==0)
            return;
        printIncreasing(n-1);
        
        System.out.println(n);
    }

}