#include <iostream>

using namespace std;

class Book{
    public:
    string name;
    string author;
    int pages;
    double price;
};

class Vhicle{
private:
    string rating;

public:
    string name;
    int wheel;
    Vhicle(string aName, int aWheel){
        name = aName;
        wheel = aWheel;
    }
    bool isBig(){
        if(wheel==4){
            return true;
        }
        else{
            return false;
        }
    }
    void setRating(string rRating){
        if(rRating=="Good"||rRating=="Bad"||rRating=="So so"){
            rating= rRating;
        }
        else{
            rating="NA";
        }
    }
    string getRating(){
        return rating;
    }
};

class Chef{
public:
    void makeChicken(){
        cout<< "Chef makes Chicken."<<endl;
    }
    void specialDish(){
        cout<< "Chef cooks specialdish like BBQ."<< endl;
    }
};

class BangaliChef:public Chef{

public:
    void specialDish(){
        cout<<"Bengali chef can cook BBQ."<< endl;
    }
};
int main()
{

    int age = 26;
    double gpa = 3.082;
    double *pGpa = &gpa;
    string name = "Shaon";
    cout << "Age is: " << &age << endl;
    cout << "Name is: " << &name << endl;
    cout << "Gpa is: " << *&gpa <<endl;

    Book book1;
    book1.name="Novel";
    book1.author="Bengali Writer";
    book1.pages=2000;
    book1.price=700.00;

    cout << "The "<<book1.name<<" price is "<<book1.price<<" and the writer is "<<book1.author
    <<" which has "<<book1.pages<<" pages."<<endl;

    Vhicle vhicle1("Car",4);
    Vhicle vhicle2("Bike",2);
    vhicle2.setRating("Good");
    cout << "This is "<< vhicle1.name<<endl;
    cout << vhicle1.isBig()<<endl;
    cout << "Bike is "<<vhicle2.isBig()<<endl;
    cout << vhicle2.getRating() <<endl;

    Chef chef1;
    chef1.makeChicken();
    chef1.specialDish();
    BangaliChef chef2;
    chef2.specialDish();

    return 0;
}
