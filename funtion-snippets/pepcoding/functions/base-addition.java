import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int b = scn.nextInt();
      int n1 = scn.nextInt();
      int n2 = scn.nextInt();
  
      int d = getSum(b, n1, n2);
      System.out.println(d);
   }
   public static int getSum2(int b1, int n1, int n2){
            
            int res = 0;
            int p = 1;
            int carry = 0;
            while(n1>0 || n2>0 || carry>0){
                int d1 = n1%10;
                int d2 = n2%10;
                int d = carry + d1 + d2;
                carry = d/b1;
                res+= (d%b1)*p;
                p*=10;
                n1/=10;
                n2/=10;
            }
            
            
            return res;
           }
   public static int getSum(int b1, int n1, int n2){
            
            String a = String.valueOf(n1);
            String b = String.valueOf(n2);
            int base = b1;
            int len_a, len_b;
  
            len_a = a.length();
            len_b = b.length();
          
            String sum, s;
            s = "";
            sum = "";
          
            int diff;
            diff = Math.abs(len_a - len_b);
              
            
            for (int i = 1; i <= diff; i++)
                s += "0";
              
           
            if (len_a < len_b)
                a = s + a;
            else
                b = s + b;
          
            int curr, carry = 0;
              
         
            for (int i = Math.max(len_a, len_b) - 1; 
                                   i > -1; i--) {
                  
        
                curr = carry + (a.charAt(i) - '0') + 
                               (b.charAt(i) - '0');
          
           
                carry = curr / base;
          
                
                curr = curr % base;
          
              
                sum = (char)(curr + '0') + sum;
            }
            if (carry > 0)
                sum = (char)(carry + '0') + sum;
            return Integer.parseInt(sum);
           }
  }