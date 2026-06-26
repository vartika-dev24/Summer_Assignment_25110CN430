#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{
    srand(time(0)); //to seed number generator
    int ranNum=(rand()%100)+1; //generates a number between 1-100 
    int guessNum;
      cout<<"Guess the number! : "<<endl;
      
    while(guessNum!=ranNum)
    {
      cin>>guessNum;
      if(guessNum>='a' || guessNum<='z' || guessNum>='A' || guessNum<='Z')
      cout<<"Invalid input"<<endl;
      if(guessNum==ranNum)
     {
      cout<<"Its a match! You guessed the correct number"<<endl;
     }
     else if(abs(guessNum-ranNum)<=5)
     {
        cout<<"You're close!"<<endl;
        if(guessNum<ranNum)
        cout<<"Go higher!"<<endl;
        else
        cout<<"Go lower!"<<endl;
     }
     else if(guessNum<ranNum)
     cout<<"Try again! Guess a number higher"<<endl;
     else
     cout<<"Try again! Guess a number lower"<<endl;
    }
    return 0;
}