#include <iostream>

using namespace std;

class Employee{
private:
    string Name;
    string Company;
    int Age;
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
};

int main()
{
    Employee employee1=Employee("Shaon", "Strativ", 25);
    //employee1.Name="Shaon";
    //employee1.Company="Strativ";
    //employee1.Age=25;
    employee1.Information();

    Employee employee2=Employee("Shinorina", "Food King", 25);
    employee2.Information();
    employee2.setAge(17);
    cout<< employee2.getName()<<" is "<<employee2.getAge()<<" years old."<<endl;
    return 0;
}
