#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"enter the value of no"<<endl;
    cin>> n;

    bool isprime=1;
    for (int i = 2; i<n ; i++)
       { if (n%i==0)
    {
        //cout<<"the no is not a prime no"<<end1;
        isprime=0;
        break;
    }
        }
    if(isprime==0){
        cout<<"its not a prime no" << endl;       
    }
    else{
        cout<<"is a prime no."<< endl;
    }
    
    }
    