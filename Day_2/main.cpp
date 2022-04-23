#include <iostream>
#include <cmath>

using namespace std;

void testFunc( string name, int age){
    cout << "This is "<<  name << " and age is " << age << " years old." <<endl;
}

double cube(double number){
    double result = number * number * number;
    return result;
}

int main()
{
    string phrase = "Ihaon";
    phrase[0] = 'S';
    cout << phrase <<endl;

    string phrase1 = "Shinorina Shahrin Shaon";
    cout << phrase1.find("Shaon") << endl;
    string phrasesub = phrase1.substr(4,2);
    cout << phrasesub << endl;

    cout << 5*(7+10) << endl;

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old ." << endl;

    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name <<endl;

    double num1, num2;
    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    cout << num1 + num2 << endl;
    int numbers[20] = {1,2,3,4,5,6};
    numbers[10] = 100;
    cout << numbers[20] <<endl;

    testFunc("Shaon", 25);
    testFunc("Ishabela", 55);
    testFunc("Sattar", 65);

    cout << cube(5) <<endl;

    bool isMale = false;
    bool isMuslim = true;

    if (isMale && isMuslim){
        cout << "You are male and muslim";
    }
    else if(!isMale && isMuslim){
        cout << "You are female and muslim";
    }
    else if(isMale && ! isMuslim){
        cout << "You are male but not muslim";
    }
    else{
        cout << "You are female but not muslim";
    }

    cout<<"####################### This is C++ problem solving ###################"<<endl;
    int user_input;
    cout << "Enter a positive number no greater than 15"<<endl;
    cin >> user_input;

    while(user_input > 15 || user_input < 0){
        cout << "Enter 15 or less than 15:";
        cin >> user_input;
    }
    cout << "Your number is: "<< user_input << endl;

    for (int i = 0; i < user_input; i++){
            for (int j =0; j<user_input; j++){
                    cout << "X";
            }
            cout << endl;
    }

    int fifty = 50;
    int one_hundrad = 100;
    int total = fifty+one_hundrad;
    cout << "This is total: "<< total << endl;

    float totalSalesPercentage = 0.58;
    float salesThisYear = 8.68;
    cout << endl << endl;
    cout << "Total sales this year is ";
    cout << totalSalesPercentage* salesThisYear << endl;

    float stateTax = 0.04;
    float countryTax = 0.02;
    int purchase = 95;
    float total_state_purchase = purchase * stateTax;
    float total_country_purchase = purchase * countryTax;

    cout << "State purchase amount is " << total_state_purchase << endl;
    cout << "Country purchase amount is " << total_country_purchase << endl;

    float Tax = 0.0675;
    float Tip = 0.20;

    float meal_charge = 88.67;
    float meal_tax_charge = meal_charge * Tax;
    float meal_tip_charge = meal_charge * Tip;
    float total_bill = meal_charge + meal_tax_charge + meal_tip_charge;

    cout << "Total cost "<<meal_charge << endl;
    cout << "Tax " << meal_tax_charge << endl;
    cout << "Tip " << meal_tip_charge << endl;
    cout << "Total " << total_bill << endl;


    int a = 28;
    int b = 32;
    int c = 37;
    int d = 24;
    int e = 33;
    int sum = a+b+c+d+e;
    int avr = sum/5;
    cout << "The average is: " << avr << endl;

    double periods = 26;
    double pay_amount = 2200;
    double annual_pay = pay_amount * periods;
    cout << "The annual pay is: " << annual_pay << endl;


    return 0;
}
