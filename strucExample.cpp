/*Write a program to store and print the roll no., name , age and marks of a student using structures.*/

#include<iostream>

using namespace std;

int main()
{
 struct student
	{
	 int roll_no;
	 char name[10];
	 int age;
	 int marks;
};
struct student p = {27,"GITESH",33,60};
cout<<p.roll_no<<" "<< p.name<<" "<<p.age<<" "<<p.marks<<"\n";
return 0;
}


