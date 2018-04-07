#include<iostream>
#include<string.h>
#include <iomanip>
using namespace std;
class employee
{
private:
	char* name;
	int id;
	char* major;
	float time;
	int salary;
public:
	void setName(char []);
	char* getName();
	int setId(int _Id, int t, employee *p);
	int getId();
	void setMajor(char []);
	char* getMajor();
	void setTime(int _Time);
	int getTime();
	employee();
	void print();
	float salaryCal();
	bool incTime(int _incTime);
	void Nsort(employee *a, int n);
	~employee();
private:
	float salaryzCal();
};

employee::employee(){
    name = new char[5];
    strcpy(name, "test");
	major = new char[5];
    strcpy(major, "test");
	cout << "CREATED" << endl;
}

void employee::setName(char _name[]){
    name = new char[strlen(_name+1)];
    strcpy(name, _name);
}

char* employee::getName(){
    return name;
}

void employee::setMajor(char _major[]){
    major = new char[strlen(_major+1)];
    strcpy(major, _major);
}

char* employee::getMajor(){
    return major;
}

void employee::setTime(int _Time){
	time = _Time;
}

int employee::getTime(){
	return time;
}

int employee::setId(int _Id, int t, employee *p){
    int h = 1;
    for(int j = 1; j < t; j++)
    {
        if(_Id == p[j].id)
        {
            h = 0;
            break;
        }
    }
    if(h == 1)
    {
        id = _Id;
    }
    else
    {
        cout <<"--------------ID BVRTGEGDSEN BAINA !!!------------------"<< endl;
    }
    return h;
}


int employee::getId(){
	return id;
}

float employee::salaryCal(){
	if(strcmp(major, "zahiral")==0)
	{
		return salaryzCal();
	}
	else
	{
		return time*5000;
	}
}

float employee::salaryzCal(){
	return time*10000;
}

bool employee::incTime(int _incTime){
	if(time < 24)
	{
		time=time+_incTime;
		return true;
	}
	else
	{
		return false;
	}
}

void employee::Nsort(employee *a, int n){
    int c,d;
	employee b;
	for(c=1; c<n; c++)
	{
		for(d=1; d<n+1; d++)
		{
			if(strcmp(a[d].name, a[d+1].name) == 1)
			{
				b.setName(a[d].name);	
				a[d].setName(a[d+1].name);
				a[d+1].setName(b.name);
				b.setMajor(a[d].major);
				a[d].setMajor(a[d+1].major);
				a[d+1].setMajor(b.major);
				b.id = a[d].id;
				a[d].id = a[d+1].id;
				a[d+1].id = b.id;
				b.time = a[d].time;
				a[d].time = a[d+1].time;
				a[d+1].time = b.time;
			}
		}
	}
}

employee::~employee(){
	delete name;
	delete major;
	cout << "DELETED" << endl;
}

int main()
{
	employee emp[10];
	char n[10];
	int k, i=1;
	while(1)
	{
	cout << "1. BVRTGEH  " << "2. HEWLEH  "  << "3. TSAG NEMEH  " << "4. EREMBLEH " << "5. GARAH" << endl;
		cin >> k;
		if(k == 1)
		{
			cout << "ID :";
			cin >> k;
			k = emp[i].setId(k, i, emp);
			if(k!=0)
			{
				cout << "NAME : ";
				cin >> n;
				emp[i].setName(n);
				cout << "MAJOR : ";
				cin >> n;
				emp[i].setMajor(n);
				cout << "TIME : ";
				cin >> k;
				emp[i].setTime(k);
				i++;
				cout << "-------------------BVRTGELEE----------------------" << endl;
			}
		}
		else if(k==2)
		{
			cout << "--------------------------------------------------" << endl;
			for(int j=1; j<i; j++)
			{
				cout << emp[j].getId() << setw(10) << emp[j].getName() << setw(10) << emp[j].getMajor() << setw(5) << emp[j].getTime() << setw(10) << emp[j].salaryCal() << endl;
			}
			cout << "--------------------------------------------------" << endl;
		}
		else if(k==3)
		{
			int p, k;
			cin >> p;
			cin >> k;
			if(emp[p].incTime(k)==1){
				cout << "--------- " << p << " -R HEREGLEGCH DEER " << k << " TSAG NEMEGDLEE. ---------" << endl;
			}
			else
			{
				cout << "----------------ALDAA !!!--------------" << endl;
			}
		}
		else if(k==4)
		{
			emp[i].Nsort(emp, i);
		}
		else if(k==5)
		{
			return 0;
		}
	}
	return 0;
}
