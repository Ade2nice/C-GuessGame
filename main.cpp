#include <iostream>

using namespace std;
int correctNum,guessedNum, tries = 1;

int main()
{
    cout <<"Hello! This is a Hangman Game" << endl;
    cout <<"You will guess a number from 1-10 "<<endl;
    cout <<"You have 3 tries to guess a number correctly, else the game terminates" <<endl;
    cout<<"............................................................................."<<endl;
    cout<<"............................................................................."<<endl;
    cout<<"Please enter a guess from 1-10"<<endl;
    cin >> guessedNum ;
    correctNum = 1+(rand()%10);
    if(cin.fail()){
            cout<<"Invalid Input"<< endl;
            return 0;
    }
    else{
        do {
        if(guessedNum == correctNum){
                cout<<"Congratulations!! You won!" << endl;
                    break;
                return 0;
            }
            cout<<"You loose!"<< endl;
            cout <<"You have  " << (3 - tries) << " tries left " << endl;
            cout<<"Please enter another guess from 1-10"<<endl;
            cin>>guessedNum;
            tries++;
            if(guessedNum != correctNum && tries == 3){
                cout<<"You loose!"<< endl;
                cout<<"Game Over!"<< endl;
                break;
                return 0;
            }
    }
    while(tries <=3);
    }

return 0;




}
