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
cout<<temp.Name<<temp.Branch<<endl;

}
static int know(students *study,int size){
	students temp=study[0];
	int p=0;
	while(size--){
		
		cout<<temp.Name<<temp.regno<<endl;
		p++;
		temp=study[p];		
		
	}
	
	
	
}



static int sort(students *study,int size)
{ //Bubble Sort
	for(int i=0;i<size;i++){
	for(int j=i;j<size;j++){
	
	if(study[j].regno>study[j+1].regno)
	{
		students temp=study[j];
		study[j]=study[j+1];
		study[j+1]=temp;
		
	}
}
}
}
int static BinarySearch(students *study,int regno,int size)
{
	int front=0,back=size-1;
	int mid=(front+back)/2;
	while(study[mid].regno!=regno){
	if(study[mid].regno>regno){
		front=0;
		back=mid-1;
		
	}
	else
	{front=mid+1;
	back=size-1;
		
	}
	int mid=(front+back)/2;
	
}
	cout<<endl<<study[mid].Name<<study[mid].regno;
	
}



};
int main()
{
students stud[]={{123,"abhi","ece",4.5},{152,"abho","enc",5.8},{132,"simpy","coe",4.7},{145,"tarun","mec",4.2}};
int size =sizeof(stud)/sizeof(stud[0]);
students::search(123,stud);
students::sort(stud,size);
students::know(stud,size);
students::BinarySearch(stud,132,size);
    return 0;
}


