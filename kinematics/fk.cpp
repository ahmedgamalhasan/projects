#include <iostream>
#include <math.h>

using namespace std;

int main(){

float theta_1=0;
float theta_2=0;
float theta_3=0;

float x=0;
float y=0;
float theta=0;

cout<<"pleas enter the 3 angels"<<endl;
cin>>theta_1>>theta_2>>theta_3;
theta=theta_1+theta_2+theta_3;
theta_2*=(M_PI/180);
theta_1*=(M_PI/180);
x=(200*cos(theta_1))+(150*cos(theta_1+theta_2))+(0);
y=(200*sin(theta_1))+(150*sin(theta_1+theta_2))+(0);


cout<<"X = "<<x<<endl<<"Y = "<<y<<endl<<"Theta = "<<theta<<endl;




return 0;
}
