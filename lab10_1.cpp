// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    string x[]={"A","B+","B","C+","C","D+","D","F","W"};
    srand(time(0));
    int i = rand()%9;
    if(i == 0){
        cout << "You will get " << x[0] << " in this 261102.";
    }else if(i ==1){
        cout << "You will get " << x[1] << " in this 261102.";
    }else if(i == 2){
        cout << "You will get " << x[2] << " in this 261102.";
    }else if(i == 3){
        cout << "You will get " << x[3] << " in this 261102.";
    }else if(i == 4){
        cout << "You will get " << x[4] << " in this 261102.";
    }else if(i == 5){
        cout << "You will get " << x[5] << " in this 261102.";
    }else if(i == 6){
        cout << "You will get " << x[6] << " in this 261102.";
    }else if(i == 7){
        cout << "You will get " << x[7] << " in this 261102.";
    }else{
        cout << "You will get " << x[8] << " in this 261102.";
    }

    return 0;
}