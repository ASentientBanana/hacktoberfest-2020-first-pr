using System;
class Program
{
    static int Factorial(int N)
    {
        return ( (N == 0) ? 1 : N * Factorial(N-1) );
    }
    
    
    static void Main()
    {
        for (int i = 0; i < 10; ++i)
        {
            Console.WriteLine($"Factorial of number {i} is {Factorial(i)}");
        }
    }
}
