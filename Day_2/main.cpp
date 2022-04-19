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


    return 0;
}
