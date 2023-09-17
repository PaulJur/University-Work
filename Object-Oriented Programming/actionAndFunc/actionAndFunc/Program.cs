using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

public class Program
{
    public event Action ivyko;
    public event Func<int, int, int> operation;

    public static void Main()
    {
        A a1 = new A();
        A a2 = new A();

        B b = new B();

        Program p = new Program();

        a1.register(p);
        a2.register(p);
        b.register(p);

        p.operation += p.add;
        int verte = p.operation(10, 10);
        Console.WriteLine(verte);
    }
    int add (int a, int b)
    {
        return a + b;
    }

}

class A
{
    public void register(Program p)
    {
        p.ivyko += this.act;
    }
    public void unregister(Program p)
    {
        p.ivyko -= this.act;
    }
    public void act()
    {
        Console.WriteLine("A");
    }
}
class B
{
    public void register(Program p)
    {
        p.ivyko += act;
        
    }
    public void act()
    {
        Console.WriteLine("B");
    }
}
