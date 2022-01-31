/**< using namespace std;


int getMax(int num1, int num2, int num3){
    int result;
    if (num1>num2 && num2>num3){
        result = num1;
    }
    else if(num1<num2 && num2>num3){
        result = num2;
    }
    else{
        result = num3;
    }
    return result;
}

int main()
{

    i
}
 */
#include <iostream>

using namespace std;

string getDayName(int dayNum){
    string dayName;
    switch(dayNum){
        case 0:
            dayName = "Monday";
            break;
        case 1:
            dayName = "Tuesday";
            break;
        case 2:
            dayName = "Wednesday";
            break;
        case 3:
            dayName = "Thursday";
            break;
        case 4:
            dayName = "Friday";
            break;
        case 5:
            dayName = "Saturday";
            break;
        case 6:
            dayName = "Sunday";
            break;
        default:
            cout << "Invalid day number.";

    }
    return dayName;
}

int main()
{
    int secretNumber = 22;
    int guessNumber;
    int numberOfGuess=3;
    int guessCount=0;
    bool outOfGuess = false;

    while(secretNumber!=guessNumber && !outOfGuess){
        if(guessCount<numberOfGuess){
            cout<<"Enter Guess Number: ";
            cin >> guessNumber;
            guessCount++;
        }
        else{
            outOfGuess=true;
        }
    }

    if(outOfGuess){
        cout << "You lose" <<endl;
        cout << "Number of attempt " << guessCount <<endl;
    }
    else{
        cout << "You Win!!!"<<endl;
        cout << "Number of attempt " << guessCount <<endl;
    }
    int value=1;
    while(value<=5){
        cout << value <<endl;
        value++;
    };

    cout << "Do while loop" << endl;

    int index=10;
    do{
        cout << index <<endl;
        index++;
    }while(index<=6);


    cout << getDayName(6);


    return 0;
}

