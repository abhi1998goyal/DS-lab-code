#include<iostream>
using namespace std;
class students{
public:
    int regno;
    string Name;
    string Branch;
    float cgpa;
    students(int regno,string Name,string Branch,float cgpa)
    {this->regno=regno;
    this->Name=Name;
    this->Branch=Branch;
    this->cgpa=cgpa;

    }
static int search(int regno,students *study){
students temp=study[0];
int i;
while(temp.regno!=regno){

    i++;
    temp=study[i];

}
cout<<temp.Name<<temp.Branch;

}
};
int main()
{
students stud[2]={{123,"abhi","ece",4.5},{125,"abho","enc",5.8}};
students::search(123,stud);

    return 0;
}


