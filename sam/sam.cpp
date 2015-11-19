#include <iostream>

void directions();
// This function describes to the user what the program does.

void input(char *a, int size, int *number_used);
// This function reads the input into the array.

// void delete_repeats(char a[], int& number_used);
// This function essentially does the computation/sorting/deletion of letters within the array.

void output(char *a, int *number_used);
// This function reads out the new sentence, with deleted letters, and the new size of the array

int main()
{
using namespace std;

int Size=100;
char *array = new char[Size]();
int number_used;
directions ();
input(array, Size, &number_used);
output(array, &number_used);
}

void directions ()
{
using namespace std;

cout << "\n";
cout << "------------------------------------------------------------\n";
cout << "Please remember to hit ENTER after inputting any information.\n";
cout << "\n";

cout << "This program allows the user to input a sentence. Once the\n";
cout << "desired sentence has been entered, complete with a period,\n";
cout << "the program will delete any letters that appear in the\n";
cout << "sentence more than once. Afterwards, the program will\n";
cout << "read back the new sentence (or fragments thereof), and\n";
cout << "the size of the array.\n";
cout << "\n";
}

// void input(char *a, int size, int *number_used)

void input(char *a, int size, int *number_used)
{

using namespace std;
char c;
int index = 0;

cout << "Please type in a sentence.\n";
cout << "Rememeber to hit ENTER and add a period.\n";

cin.get(c);


while (c != '\n' && index < size) {
a[index] = c;
cin.get(c);
index++;
}

*number_used = index;

for (int i = 0; i < *number_used; i++) {
for (int j = i + 1; j < *number_used; j++) {
if (a[i] == a[j]) {
*number_used=*number_used-1;
for (int k = j; k < *number_used; k++)
a[k] = a[k + 1];
a[*number_used] = '\0';
--j;
}
}
}

}

void output(char *a, int *number_used)
{
using namespace std;

cout << "\n";
cout << "The new sentence, without the repeated letters reads as:\n";
for (int i = 0; i < *number_used; i++) {
cout << a[i];
}
cout << "\n";
cout << "Likewise, the size of the new array is: "<< *number_used<< endl;

cout << "\n";
cout << "The program is now ending.\n";

cout << "\n";
cout << "------------------------------------------------------------\n";
cout << "\n";

}