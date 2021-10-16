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

float d=0;
float f=0;
float a=0;
float b=0;
float l_1=200;
float l_2=150;

cout<<"enter the x y theta "<<endl;
cin>>x>>y>>theta;

d=2*l_1*l_2;
f=(pow(x,2)+pow(y,2)-pow(l_1,2)-pow(l_2,2));
	
theta_2=acos(f/d);


a=l_1+(l_2*cos(theta_2));
b=l_2*sin(theta_2);

theta_1=acos(((a*x)+(b*y))/((pow(a,2))+(pow(b,2))));
theta_1*=(180/M_PI);
theta_2*=(180/M_PI);
theta_3=theta-theta_1-theta_2;

cout<<"theta_1 = "<<theta_1<<endl<<"theta_2 = "<<theta_2<<endl<<"Theta_3 = "<<theta_3<<endl;

return 0;
}
