#include <iostream>

using namespace std;

int main(){
    int num[]={1,2,3,4,5};
    for(int i=0; i<5;i++)
    {
           cout << num[i] << endl;
    }
    int numberGrid[3][2]={ {1,2},{3,4},{5,6}

    };
    cout << "2-D ARRAY " << numberGrid[1][2] <<endl;

    cout <<"For Loop"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout << numberGrid[i][j];
        }
          cout << endl;
    }


    return 0;

}


