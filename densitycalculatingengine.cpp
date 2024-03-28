#include <bits/stdc++.h>
using namespace std;

void cgsdensity();

void sidensity();

int main(){
    char d;
    cout<<"\nDENSITY CALCULATOR || BY ARINDAM SAMANTA\n"<<"This can density as well as relative density of any object by giving it the mass and volume of that object.\n"<<"To calculate density by:\n"<<"1. CGS system - give input capital C firstly.\n"<<"2. SI unit - Give input capital S firstly.\n"<<"If you give invalid input,then it will not able to take your request.\n"<<"Enter Your Preference:\n";
    cin>>d;
    if(d=='C'){
       cgsdensity(); 
    }
    else if(d=='S'){
        sidensity();
    }
    else{
        cout<<"Invalid Value\n";
    }

    return 0;
}

void cgsdensity(){
    float m, v;
    cout<<"Enter the value of mass of the object(in grams):\n";
    cin>>m;
    cout<<"Enter the value of the volume of the object(in cubic cm):\n";
    cin>>v;
    float dense = m/v;
    cout<<"The density of the object is "<<dense<<"gm/cubic cm.\n"<<"The relative density of the object is "<<dense<<" .\n";
}

void sidensity(){
    float m, v;
    cout<<"Enter the value of mass of the object(in kg):\n";
    cin>>m;
    cout<<"Enter the value of the volume of the object(in cubic m):\n";
    cin>>v;
    float dense = m/v;
    float s = 1000;
    float watdense = dense/s;
    cout<<"The density of the object is "<<dense<<"kg/cubic m.\n"<<"The relative density of the object is "<<watdense<<" .\n";
}