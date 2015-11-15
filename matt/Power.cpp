#include <iostream>
using namespace std;

class Resistor
{
public:
	 Resistor(){
		this->resistance = 0.0;
		this->current=0.0;
	};
	~Resistor();

void ChangeResistance(float r){
	this->resistance = r;
};


float BandResistance(char str1[8],char str2[8],char str3[8]){

    int band1, band2, band3, band4;
	
	if (!strcmp("black", str1))
		band1 = 0;
	else if (!strcmp("brown", str1))
		band1 = 1;
	else if (!strcmp("red", str1))
		band1 = 2;
	else if (!strcmp("orange", str1))
		band1 = 3;
	else if (!strcmp("yellow", str1))
		band1 = 4;
	else if (!strcmp("green", str1))
		band1 = 5;
	else if (!strcmp("blue", str1))
		band1 = 6;
	else if (!strcmp("violet", str1))
		band1 = 7;
	else if (!strcmp("gray", str1))
		band1 = 8;
	else if (!strcmp("white", str1))
		band1 = 9;


	if (!strcmp("black", str2))
			band2 = 0;
	else if (!strcmp("brown", str2))
		band2 = 1;
	else if (!strcmp("red", str2))
		band2 = 2;
	else if (!strcmp("orange", str2))
		band2 = 3;
	else if (!strcmp("yellow", str2))
		band2 = 4;
	else if (!strcmp("green", str2))
		band2 = 5;
	else if (!strcmp("blue", str2))
		band2 = 6;
	else if (!strcmp("violet", str2))
		band2 = 7;
	else if (!strcmp("gray", str2))
		band2 = 8;
	else if (!strcmp("white", str2))
		band2 = 9;


	if (!strcmp("black", str3))
		band3 = 1;
	else if (!strcmp("brown", str3))
		band3 = 10;
	else if (!strcmp("red", str3))
		band3 = 100;
	else if (!strcmp("orange", str3))
		band3 = 1000;
	else if (!strcmp("yellow", str3))
		band3 = 10000;
	else if (!strcmp("green", str3))
		band3 = 100000;
	else if (!strcmp("blue", str3))
		band3 = 1000000;
	else if (!strcmp("violet", str3))
		band3 = 10000000;
	else if (!strcmp("gray", str3))
		band3 = 100000000;
	else if (!strcmp("white", str3))
		band3 = 1000000000;

	return (band1 * 10 + band2)*band3;
};

void ChangeCurrent(float c){
	this->current = c;
};
float ResistanceVal(){
 return this->resistance;
};
float CurrentVal(){
	return this->current;
};
float VoltageVal(){
	return (float)(this->current * this->resistance);
};

private:
   float current;
   float resistance; 
};

class Power: public Resistor
{
public:
	Power(){

	};
	~Power();

float get_power(){
	float i = CurrentVal();
	float r = ResistanceVal();
	return (float)(i*i)*r;
}
	
};

int main(){

	Power *p = new Power();
	// printf("ResistanceVal : %f",p->ResistanceVal());
    int loop=1;
    while(loop){
    	printf("Enter one of the Menu items:\n");
        printf("1.Resistance:\n");
        printf("2.Current:\n");
        printf("3.Band colors:\n");
        printf("4.Exit:\n");
        
        int inp;
        float r,c;
        char str1[8],str2[8],str3[8]; 
    	scanf("%d",&inp);
		switch(inp){
	    case 1  :
	       printf("Enter Resistance\n");
	       scanf("%f",&r);
	       p->ChangeResistance(r);
	       printf("ResistanceVal:=%f\n",p->ResistanceVal());
	       printf("CurrentVal:=%f\n",p->CurrentVal());
	       printf("VoltageVal:=%f\n",p->VoltageVal());
	       printf("Power:=%f\n",p->get_power());
	       break; 
	    case 2  :
	       printf("Enter Current\n");
	       scanf("%f",&c);
	       p->ChangeCurrent(c);
	       printf("ResistanceVal:=%f\n",p->ResistanceVal());
	       printf("CurrentVal:=%f\n",p->CurrentVal());
	       printf("VoltageVal:=%f\n",p->VoltageVal());
	       printf("Power:=%f\n",p->get_power());
	       break; 
	    case 3  :
	       printf("Enter First String\n");
	       gets(str1);
	       printf("Enter Second String\n");
	       gets(str2);
	       printf("Enter Third String\n");
	       gets(str3);
	       p->BandResistance(str1,str2,str3);
	       printf("ResistanceVal:=%f\n",p->ResistanceVal());
	       printf("CurrentVal:=%f\n",p->CurrentVal());
	       printf("VoltageVal:=%f\n",p->VoltageVal());
	       printf("Power:=%f\n",p->get_power());
	       break;
	    case 4  :
	       loop=0;
	       break;
	  
	    }
	}
	return 0;
}