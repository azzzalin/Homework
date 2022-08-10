using System;

namespace HW1
{
     class Student
    {
        private string name_surname;
        private int group;
        private int age;
        private double gpa;
        private int[][] grade = new int [3][];

      
        public enum Subjects
      {
            Programming, Administration, Design
      }

        public string Name_surname
      {
        get { return name_surname; }
        set { name_surname = value; }
      }

       public int Age
      {
            get { return age; }
            set { age = value; }
      }

        public int Group
      {
        get { return group; }
        set { group = value; }
      }

       public double Gpa
     {
        get { return gpa ; }
        set { gpa = value; }
     }


    public void Print()
    {
        Console.WriteLine("Имя и Фамилия: " + name_surname);
        Console.WriteLine("Возраст: " +  age);
        Console.WriteLine("Группа: " + group);
        Console.WriteLine("Средний балл: " + gpa);
        Console.WriteLine();
    }

    public void Fill()
    {
        Console.WriteLine("Введите имя и фамилию студента: ");
        name_surname = Console.ReadLine();
        Console.WriteLine("Введите возраст студента: ");
        age = Convert.ToInt32(Console.ReadLine()); 
        Console.WriteLine("Введите группу студента (пример 1234): ");
        group = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Введите средний балл студента: ");
        gpa = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine();
    }
}
 
}
