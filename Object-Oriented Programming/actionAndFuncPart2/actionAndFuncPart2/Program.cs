using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

public class Program
{
   // public event Action ivyko;
   // public event Func<int, int, int> operation;

    public static void Main()
    {
       /* Program p = new Program();
        p.ivyko += delegate { Console.WriteLine("Chad");  };
        p.operation += delegate (int a, int b) { return a + b; };

        p.operation += (a,b) => { return a + b; };
        p.ivyko += () => Console.WriteLine("Chad");

        p.ivyko += () =>
        {
            Console.WriteLine("Chad here1");
            Console.WriteLine("Chad here2");
        };

        p.ivyko?.Invoke();



    }
    int add(int a, int b)
    {
        return a + b;
    }
   */
       Animal animal1 = new Animal();
       Animal animal2 = new Dog();
       Animal animal3 = new Cat();
        //((Dog)animal2).Do();
        //((Cat)animal3.Do();
        animal1.Do();
        animal2.Do();
        animal3.Do();
       Animal[] ma = new Animal[] { animal1, animal2, animal3 };
        Pet(ma);

        //Console.WriteLine(animal1.GetType());
        //Console.WriteLine(animal2.GetType());
        //Console.WriteLine(animal3.GetType());
}
    static void Pet(Animal[] an)
    {
        if(an[0].GetType() == typeof(Dog))
        {
            Console.WriteLine("What the dog doin");
        }
        else if(an[0].GetType() == typeof(Cat))
        {
            Console.WriteLine("What the cat doin");
        }
        else
        {
            Console.WriteLine("What animal");
        }
        Dog dog = an[0] as Dog;
        if(dog != null)
        {
            Console.WriteLine("What the dog doin");
        }
        Cat cat = an[0] as Cat;
        if(cat != null)
        {
            Console.WriteLine("What the cat doin");
        }
        if (an[0] is Cat)
        {
            Console.WriteLine("What the cat doin");
        }
    }

class Animal
{
    public virtual void Do()
    {
        Console.WriteLine("Animal");
    }
}
class Dog : Animal
{
     public override void Do() //new public void //publuc sealed  ovveride void(priority 1 over other overrides)
    {
        Console.WriteLine("Dog");
    }
}
    class Cat : Animal
    {
        public override void Do() //new public void
        {
            Console.WriteLine("Cat");
        }
    }
}