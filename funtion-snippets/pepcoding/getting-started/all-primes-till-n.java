import java.util.*;

public class Main{
    public static boolean isPrime(int n){
        for(int i =2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        
        return true;
    }
    public static void main(String[] args) {
        // write your code here
        
        Scanner sc = new Scanner(System.in);
        
        int low=sc.nextInt(),high=sc.nextInt();
        
        while(low<=high){
            if(isPrime(low))
                System.out.println(low);
            low++;
        }
    }
}