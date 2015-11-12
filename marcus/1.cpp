#include <iostream>
#include <iomanip>
#include <cmath>
#define g 9.81

using namespace std;

double new_xPosition(double old_xPosition,double xVelocity,double _time){
  return  (double)(old_xPosition + (xVelocity * _time));
}

double new_yPosition(double old_yPosition,double yVelocity,double _time){
 return  (double)(old_yPosition + (yVelocity * _time));
}
double new_xVelocity(double xaccel,double _time){
  return (double)(xaccel * _time);
}
double new_yVelocity(double yaccel,double _time){
  return (double)(yaccel * _time);
}
double new_xAccel(double _time){
 return (double)(-_time);
}
double new_yAccel(double _time){
 return (double)(-9.81 + _time);
}

int main()
{

double xPosition;
double _time,timeInterval;
double yaccel, xaccel, yPosition;
double elevationAngle;
double xVelocity,yVelocity;
double muzzlevelocity;

// 4.You must prompt the user for initial input of elevation angle.

cout<<"Enter Elevation Angle: ";
cin>>elevationAngle;


muzzlevelocity=50;

xVelocity = muzzlevelocity * (cos(elevationAngle));
yVelocity = muzzlevelocity * (sin(elevationAngle));
_time = 0.0;

xaccel= -_time;
yaccel= -9.81 + _time;

xPosition = 0.0; 
yPosition = 0.0;
timeInterval = 0.001; // time step is set to 1 millisecond

double xPositionarr[100];
double yPositionarr[100];
double xVelocityarr[100];
double yVelocityarr[100];
double xAcclarr[100];
double yAcclarr[100];
int xposindex=0;
int yposindex=0;
int xvelindex=0;
int yvelindex=0;
int xaccindex=0;
int yaccindex=0;

// 6.	You program must terminate when the projectile strikes the ground
while (!(yPosition < 0.0))
{



// 5.	You must output the time, the height, and the downrange distance at each increment of time. (instantaneous states)
// 8.	All data must be output with three decimal places. (use setprecision)
// 9.	All columns must be aligned. (use setw)

cout << setprecision(3) << "Time = " << _time << setw(10) << setprecision(3)
<< " Range = " << xPosition << setw(10) << setprecision(3)
<< " Height = "<< yPosition << endl;

// 2.	You must use arrays for the position, velocity, and acceleration vectors
xPositionarr[xposindex++]=xPosition;
yPositionarr[yposindex++]=yPosition;
xVelocityarr[xvelindex++]=xVelocity;
xVelocityarr[yvelindex++]=yVelocity;
xAcclarr[xaccindex++]=xaccel;
xAcclarr[yaccindex++]=yaccel;

_time += timeInterval;

xaccel= new_xAccel(_time);

yaccel= new_yAccel(_time);

xVelocity = new_xVelocity(xaccel,_time);

yVelocity = new_yVelocity(yaccel,_time);
// 7.	You must use the “+=” operator.
xPosition += new_xPosition(xPosition,xVelocity,_time);
yPosition += new_yPosition(yPosition,yVelocity,_time); 


}

cout << "Elevation Angle = " << elevationAngle << " degrees" << endl;
cout << setprecision(3) <<"Range of Projectile : "<<xPosition<<" m"<<endl;


cin.get();
return 0;
}