#include <iostream>
#include <cmath>
using namespace std;

//
// Fireship's FizzBuzz
// Created by rougeblue on 8/11/2022.
//

int main(){
    int var;
    cout << "How many iterations?: ";
    cin >> var;
    for(int i = 0; i < var;i++){
        if( (fmod (i, 3) && (fmod (i, 5) ) == 0)){
            cout << "FizzBuzz!\n";
        }
        else if(fmod(i, 3) == 0){
            cout << "Fizz\n";
        }
        else if(fmod(i, 5) == 0){
            cout << "Buzz\n";
        }
        else if(fmod(i, 7) == 0){
            cout << "Bazz\n";
        }
        else{
            cout << i << endl;
        }
    }
    return 0;
}

