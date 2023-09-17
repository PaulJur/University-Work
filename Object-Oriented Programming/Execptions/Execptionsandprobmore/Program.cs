using System;


public class Program
{

    public static void Main()
    {
        ThreadStart method = gijosMetodas;
        Thread gija = new Thread(method);
        gija.Start();



        for (int i = 0; i < 10; i++)
        {
            Thread.Sleep(100);
            Console.WriteLine("Dirba pgr: " + i);
        }

        Console.WriteLine("Join");
        gija.Join();
        

    }
    static void gijosMetodas()
    {
        for(int i = 0; i < 100000; i++)
        {
            Thread.Sleep(100);
            if(i%7 == 0)
            {
                Console.WriteLine(i + " Can be divided by 7");
            }
            
        }
        
    }

}

