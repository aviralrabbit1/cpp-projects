#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

bool check_options(char ch){
    if(ch=='a'||ch=='A'||ch=='b'||ch=='B'||ch=='c'||ch=='C'||ch=='d'||ch=='D') return true;
    else {
        cout<<"Enter a valid input from option a, b, c, d!"<<endl;
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
    if(c=='s'|| c=='S'){
        cout<<"Q1. what's the capital of India?"<<endl;
        cout<<"(a) Delhi    (b) Mumbai     (c) Kolkata      (d) Chennai"<<endl;
        cin>>option;
        while(check_options(option)==false) cin>>option;
        if(option=='a'||option=='A') score=score+3;
        else score--;
    }
    else {
        cout<<"-> Press 's' to start the quiz."<<endl;
    }
    return score;
}

int main(){
    int result = playQuiz();
    cout<<"You scored "<<result<<" on this quiz!";

    return 0;
}


