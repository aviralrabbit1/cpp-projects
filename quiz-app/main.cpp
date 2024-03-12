#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

// Check for valid input option a, b, c, d, otherwise keep taking input
bool check_options(char ch){
    if(ch=='a'||ch=='A'||ch=='b'||ch=='B'||ch=='c'||ch=='C'||ch=='d'||ch=='D') return true;
    else {
        cout<<"-> Enter a valid input from option a, b, c, d!"<<endl;
        return false;
    }
}

// To make sure quiz starts with a 's'
bool start_quiz(char start){
    if(start=='s'||start=='S') return true;
    else {
        cout<<"-> Press 's' to start the quiz."<<endl;
        return false;
    }
}

int playQuiz(){
    
    cout<<"-------------- Welcome to Quiz Game ---------------"<<endl;
    cout<<"------------ Follow the instructions --------------"<<endl;
    cout<<"-> Quiz contains total 10 questoins."<<endl;
    cout<<"-> 3 Marks for correct answer."<<endl;
    cout<<"-> Negative marking is -1 for every wrong answer."<<endl;
    cout<<"-> Select the correct option from a, b, c, d."<<endl;
    cout<<"-> Press 's' to start the quiz."<<endl;

    char c;
    cin>>c;
    char option;
    int score = 0;
    while(start_quiz(c)==false) cin>>c;
    if(c=='s'|| c=='S'){
        cout<<"Q1. what's the capital of India?"<<endl;
        cout<<"(a) Delhi    (b) Mumbai     (c) Kolkata      (d) Chennai"<<endl;
        cin>>option;
        while(check_options(option)==false) cin>>option;
        if(option=='a'||option=='A') score=score+3;
        else { // needs to be in bracket or next question won't load
            score--;
        }
        cout<<"Q2.Correct syntax of including user defined header files in C++ is?"<<endl;
        cout<<"(a) #include [userdefined]    (b) #include \"userdefined\"     (c) #include <userdefined.h>      (d) #include <userdefined>"<<endl;
        cin>>option;
        while(check_options(option)==false) cin>>option;
        if(option=='b'||option=='B') score=score+3;
        else {
            score--
        ;}
    }
    else {
        cout<<"-> Press 's' to start the quiz."<<endl;
    }
    return score;
}

int main(){
    play:
    int playQuiz(void);
    int result = playQuiz();
    char playAgain;
    /*  Also can be looped as
    while(playAgain=='y'){
        loop statements, y or n.
    }    
    */
    if(result>=4){
        cout<<"You scored "<<result<<" on this quiz!"<<endl;
        cout<<"You passed! \nDo you want to retake the quiz?\nPress y to retake and n to quit."<<endl;
        cin>>playAgain;
        if(playAgain=='y'||playAgain=='Y') {
            goto play;
        }
        else {
            cout<<"Thank you for playing the Quiz!"<<endl;
        }
    }
    else {
        cout<<"You scored "<<result<<" on this quiz!"<<endl;
        cout<<"You failed! \nDo you want to retake the quiz?\nPress y to retake and n to quit."<<endl;
        cin>>playAgain;
        if(playAgain=='y'||playAgain=='Y') {
            goto play;
        }
        else {
            cout<<"Thank you for playing the Quiz!"<<endl;
        }

    }

    return 0;
}


