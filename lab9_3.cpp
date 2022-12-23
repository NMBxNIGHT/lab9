
#include <iostream>

using namespace std;
int main(){
    int age;
    long long int bounty;
    string character;
    cout << "Enter your age: ";
    cin >> age;
    if(age<=25){
        float tall;
        cout << "Enter your height: ";
        cin >> tall ;
        if(tall <100){
            character = "Chopper";
        }else if(tall <180){
            character ="Usopp";
        }else{
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty>1.1e9){
                character = "Zoro";
            }else{
                character = "Sanji";
            }
        }
    }else if(age<=60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty > 5e8){
            character = "Jinbe";
        }else{
            character ="Franky";
        }
    }else{
        character ="Brook";
    }

    cout << "Your character = " << character;

    return 0;
}