import java.util.*;

public class Main{
public static void primeFactoriztion(int number)
{
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            int power = 0;
            
            while (number % i == 0)
            {
                power++;
                number /= i;
            }
           for(int k=0;k<power;k++){
            System.out.print(i);
            System.out.print(" ");
        }
        }
    }

    if (number > 1)
        System.out.print(number);
        
    
}
public static void seiveArrayConstruction(int[] array, int maxNumber)
{
    array[0] = 0;
    array[1] = 1;
    for (int i = 2; i <= maxNumber; i++)
    {
        if (array[i] == -1)
        {
            for (int j = i; j <= maxNumber; j += i)
                if (array[j] == -1)
                    array[j] = i;
        }
    }
}


public static void seivePrimeFactorization(int number, int[] prime_factors, int[] seiveArray)
{
    while (number > 1)
    {
        prime_factors[seiveArray[number]]++;
        number /= seiveArray[number];
    }
}
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in); 
    int number = sc.nextInt();
  
    
    // int [] prime_factors = new int[maxNumber + 1]; 
    // int [] seiveArray = new int[maxNumber + 1];
    // for(int i=0;i<=maxNumber;i++)
    //     seiveArray[i]=-1;
    //seiveArrayConstruction(seiveArray, maxNumber);
    //seivePrimeFactorization(maxNumber, prime_factors, seiveArray);
    primeFactoriztion(number);

  
 }
}