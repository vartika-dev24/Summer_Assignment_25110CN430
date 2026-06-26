#include<iostream>
#include<string>
using namespace std;
struct QuizApplication
{    
    string question;
    string options[4];
    char answer;
};
int main()
{
    QuizApplication quiz[3]=
    {{"What is the header file used to apply mathematical functions in your code?" ,
      {"A. <iostream>","B. <cstdlib>","C. <cmath>","D. <string>"},
     'C'},
     {"Which of them correlates to fall through condition?",
    {"A. if else block","B. switch case block","C. do while loop","D. for loop"},
    'B'},
    {"Which of the function is used to find absolute value of a number?",
        {"A. pow()","B. length()","C.round()","D. abs()"},
        'D'
    }};
    cout<<" xxx STARTING QUIZ XXX "<<endl;
    int score=0;
    char inputAns;
    for(int i=0;i<3;i++)
    {
        cout<<"Question "<<i+1<<": "<<quiz[i].question<<endl;   //print questions
        for(int j=0;j<4;j++)
        {
            cout<<quiz[i].options[j]<<endl; //print options for the same question
        }
        cout<<"Enter your answer(A/B/C/D): ";
        cin>>inputAns;
        inputAns=toupper(inputAns);
        if(inputAns==quiz[i].answer)
        {
            cout<<"Correct Answer!"<<endl;
            score++;
        }
        else
        {
            cout<<"Wrong Answer! The correct answer: "<<quiz[i].answer<<endl;
        }
        
    }
    cout<<"You have completed the quiz!"<<endl;
    cout<<"Your score: "<<score<<"/"<<"3"<<endl;
    return 0;

    
}