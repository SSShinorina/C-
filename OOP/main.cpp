#include <iostream>

using namespace std;

class AbstractEmployee{
    virtual void AskPromotion()=0;
};

class Employee{
private:
    string Company;
    int Age;
protected:

    string Name;
public:

    void Information(){
        cout << "Name - "<< Name <<endl;
        cout << "Company - "<< Company << endl;
        cout << "Age - "<< Age << endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void setName(string name){
        Name= name;
    }
        void setCompany(string company){
        Company= company;
    }
        void setAge(int age){
            if (age>=18){
                    Age= age;
            }
    }
        string getName(){
            return Name;
    }
        string getCompany(){
            return Company;
    }
        int getAge(){
            return Age;
    }
    void Askpromotion(){
        if (Age>30){
            cout << Name << " got promoted!!!" <<endl;
        }
        else{
            cout << Name << ", sorry.No promotion for you." << endl;
        }
    }
    virtual void Work(){
        cout << Name << " loves to do work." <<endl;
    }

};
class Developer:public Employee{
public:

    string ProgrammingLanguage;
    Developer(string name, string company, int age, string programminglanguage):Employee(name,company, age){
        ProgrammingLanguage = programminglanguage;
    }
    void FixBug(){
        cout<< Name <<" fixing bug for "<< ProgrammingLanguage<< endl;
    }
    void Work(){
        cout << Name <<" loves to do code." <<endl;
    }
};

int main()
{
    Employee employee1=Employee("Shaon", "Strativ", 25);
    //employee1.Name="Shaon";
    //employee1.Company="Strativ";
    //employee1.Age=25;
    employee1.Information();

    Employee employee2=Employee("Shinorina", "Food King", 25);
    Employee employee3=Employee("Ishabela", "RGHSR", 55);
    employee2.Information();
    employee2.setAge(17);
    cout<< employee2.getName()<<" is "<<employee2.getAge()<<" years old."<<endl;

    employee1.Askpromotion();
    employee2.Askpromotion();
    employee3.Askpromotion();
    Developer developer = Developer("Shaon","Strativ",25,"Python");
    developer.FixBug();
    developer.Askpromotion();
    Employee* e1=&developer;
    Employee* e2=&employee2;
    Employee* e3=&employee3;
    e1->Work();
    e2->Work();
    e3->Work();
    return 0;
}
