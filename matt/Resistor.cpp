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

float BandResistance(char str1[8],char str2[8],char str[8]){

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