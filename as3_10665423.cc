/*Assigment 3
created by: 10665423
A cpp program for the UG grading system*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
int score;

cout<<"Please provide your test score: \t";
cin>>score;
cout<<endl;

if (score>=80 && score<=100)
{
cout<<"Congratulations! you made an A"<<endl;
}else if(score<80 && score>=75)
{
cout<<"Grade : B+"<<endl;
}else if (score<75 && score >=70)
{
cout<<"Grade : B"<<endl;
}else if(score<70 && score >=60)
{
cout<<"Grade : C+";
}else if (score<60 && score>=55)
{
cout<<"Grade : C"<<endl;
}else if (score<55 && score>=50)
{
cout<<"Grade : D+";
}else if (score<50 && score>=45)
{
cout<<"Grade : D"<<endl;
}else if (score<45 && score>=40)
{
cout<<"Grade: E"<<endl;
}else if(score < 40)
{
cout<<"Grade :F\n Sorry! You failed\nYou must resit the course";
}


return 0;
}
