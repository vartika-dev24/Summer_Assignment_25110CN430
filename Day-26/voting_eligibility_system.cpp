#include<iostream>
using namespace std;
int main()
{
    int age;
    char citizen;
    cout<<" xxxxxx VOTING ELIGIBILTY SYSTEM xxxxxx "<<endl;
    cout<<" \n Enter your age to check eligibility: ";
    cin>>age;
    cout<<" \n Are you a citizen of the country? (Y/N)"<<endl;
    cin>>citizen;
    citizen=toupper(citizen);
    if(citizen=='Y')
    {
       if(age<=0 || age>100)
        cout<<"\n Invalid age input"<<endl;
       else if(age<18)
        cout<<"\n Ineligible! You're too young to vote"<<endl;  
       else
         cout<<"\n Eligible! You have the right to vote"<<endl;
    }

    else if(citizen=='N')
        cout<<"\n You need to be a citizen of the country"<<endl;

    else
    cout<<"Invalid character input"<<endl;
    return 0;
}