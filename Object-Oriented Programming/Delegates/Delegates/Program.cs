using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net;

/*
  turim 4 metodus: sudek, atimk, sudaukink, padalink
turim metoda float atlikVeiksma(float a, float b, delegatas veiksmas)
main sukuriam delegata metodams
ir perduodam ji i atlikVeiksma su norimais skaiciais 
*/


namespace calculation
{
    delegate int MathDelegate(int a, int b);
    public class someDelegatinClass
    {
        public static int addNumbers(int a, int b) => a + b;
        public static int subtractNumbers(int a, int b) => a - b;
        public static int multiplyNumbers(int a, int b) => a * b;
        public static int divideNumbers(int a, int b) => a / b;

        static void Main()
        {
            MathDelegate add = someDelegatinClass.addNumbers;
            MathDelegate subtract = someDelegatinClass.subtractNumbers;
            MathDelegate multiply = someDelegatinClass.multiplyNumbers;
            MathDelegate divide = someDelegatinClass.divideNumbers;

            var result = add(2, 3);
            Console.WriteLine("Adding: " + result);
            var result2 = subtract(5, 6);
            Console.WriteLine("Subtraction: " + result2);
            var result3 = multiply(6, 76);
            Console.WriteLine("Multiplication: " + result3);
            var result4 = divide(100, 2);
            Console.WriteLine("Division: " + result4);
        }

    }

}




