/*Mark Acevedo                         Professor Sokol
    This is my fifth program assigment for this course.
A very complex program and must use IPO comments.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;
//prototypes for functions........
int readSATscores(vector<int>& a, vector<int>& b,vector<int>&  c,vector<int>& d,vector<int>& e,int n);
void printArray(vector<int>& arr, int k);
int sumscores(vector<int>& b, vector<int>& c, vector<int>& d,int k, vector<int>& t);
int findmax(vector<int>& grades, int SIZE, vector<int>& id);
int tallyarea(vector<int>& grades, int SIZE, int z);
ifstream infile;
ofstream outfile;

const int SIZE=16;


int main()
{
    int maxID;
    int num, k, z;

    infile.open("HWdata5.txt");
    if (!infile) {
        cout << "file data.txt does not exist! Pgm is exiting.";
        exit(1);
    }
 
    outfile.open("outputHW5.txt");

    vector<int> idNum(SIZE), readingscores(SIZE), mathscores(SIZE), writingscores(SIZE), totalscores(SIZE);
    k=readSATscores(idNum, readingscores, mathscores, writingscores,totalscores, SIZE);
    
    outfile << "Reading scores for students are: \n";
    printArray(readingscores, SIZE);
    //each print has score and size
    outfile << "math scores for students are: \n";
    printArray(mathscores, SIZE);

    outfile << "writing scores for students are: \n";
    printArray(writingscores, SIZE);

    outfile <<  "total scores of students are: \n";
    printArray(totalscores, SIZE);

    maxID = findmax(totalscores, SIZE, idNum);
    outfile << "Max number of marks taken by student with ID: " << maxID << endl;

    num = tallyarea(writingscores, SIZE, z);
    outfile << "Number of students with more than 650 marks are " << num << endl;

    infile.close();
    outfile.close();
    //close both input and output files before int main return 0.
    return 0;
}
/***
Input: integer arrays for a,b,c,d and containing n elements
Process: read in from a file n elts and into 4 arrays to seperate scores
Output: Array a,b,c,d are filled with n values, and have the scores per
student Each student must be counted for.
***/
int readSATscores(vector<int>& a, vector<int>& b,vector<int>&  c,vector<int>& d,vector<int>& e,int n){
      int numEmp=0;
      int num1,num2,num3,num4,sum;
      for (int i=0;i<n;i++)
      {
        infile >> a[i] >> b[i] >>c[i] >> d[i];
        e[i] =b[i]+c[i]+d[i];
      }
  
      return n;
}
/***
Input: integer arrays for qrr and containing k elements
Process: print the values in the array to an outfile must be called
several times to gather all information in all arrays, compute the scores,
and find the max score.
Output:The output must be called from to print to a file the data.
***/
void printArray(vector<int>& arr, int k)
{
    for (int i=0; i<k; i++)
        outfile << arr[i] << endl;
}
/***
Input: integer arrays for b,c,d only for three arrays of the three scores
Reading, MATH, and Writing score. Then k represents the number of elements.
Integer array t for the total array scores.
Process: The sum store in the new array and must be sent to outfile print.
Output: Array should show the total sum of scores in store array.
***/
int sumscores(vector<int>& b, vector<int>& c, vector<int>& d,int k, vector<int>& t)
{
    for (int i=0; i<k; i++){
        t[i]= b[i]+c[i]+d[i];
    }
    return k;
}
/***
Input: integer arrays for grades, the size, and the id
Process: If grades[i] > grades[index] index will give the max or equal i.
Output: The output should be sent to outfile to print new data of the max
score grade and return index, as an array.
***/
int findmax(vector<int>& grades, int SIZE, vector<int>& id){

    int index = 0;
    for (int i=1; i<SIZE; i++)
        if (grades[i] > grades[index])
            index = i;
    return id[index];
}
/***
Input: integer arrays for grades array and size again as well as the number
of elements in the array as z.
Process: read scores to be tally for which grade was over 650.
Output: Array should show all above 650 scores.
***/
int tallyarea(vector<int>& grades, int SIZE, int z){
    int count = 0;
    for (int i = 0; i<SIZE; i++) {
        if(grades[i] > 650) {
            count++;
            
        }
    }
    return count;
}















