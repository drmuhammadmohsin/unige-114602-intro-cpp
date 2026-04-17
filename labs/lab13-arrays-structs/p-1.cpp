#include <iostream>
using namespace std;

struct Mohsin{
int roll_numer;
int age;
char grade;
string friends[5];

};

int main() {

struct Mohsin m1;
cout<<"Enter roll number, age and grade of student: ";
cin>>m1.roll_numer>>m1.age>>m1.grade;
cout<<"Enter names of 5 friends: ";
for(int i=0; i<5; i++){
    cin>>m1.friends[i];
}
cout<<"\nStudent Details:\n";
cout<<"Roll Number: "<<m1.roll_numer<<endl; 
cout<<"Age: "<<m1.age<<endl;
cout<<"Grade: "<<m1.grade<<endl;
cout<<"Friends: ";
for(int i=0; i<5; i++){
    cout<<m1.friends[i]<<" ";
}   
    return 0;
}