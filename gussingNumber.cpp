#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    cout<<"-----------------------Guessing Number----------------------"<<endl;

    srand(time(0));
    int a;
    int p;
    cout<<"Enter 1 for easy mode,2 for normal mode & 3 for hard mode & any other key to quit"<<endl;
    cin>>p;
    while(p==1 || p==2 || p==3){
        if(p==1){
            a=rand()%10+1;
            cout<<"You are playing easy mode, number range from 1 to 10"<<endl;
        }
        else if(p==2){
            a=rand()%100+1;
            cout<<"You are playing normal mode, number range from 1 to 100"<<endl;
        }
        else{
            a=rand()%1000+1;
            cout<<"You are playing hard mode, numbers range from 1 to 1000"<<endl;
        }
        int n;
        cout<<"Choose a Number:";
        cin>>n;
        while(n!=a){
            if(n<a){
                cout<<"Your guess is Low"<<endl;
            }
            else{
                cout<<"Your Guess is High"<<endl;
            }
            cout<<"Choose Again : ";
            cin>>n;
        }
        cout<<"You got it,number is:"<<a<<endl;
        
        cout<<"Enter 1 for easy mode, 2 for normal mode, 3 for hard mode any nay other key for quit"<<endl;
        cin>>p;
    }
    return 0;
}



