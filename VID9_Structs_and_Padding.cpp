#include<iostream>
using namespace std;
#pragma pack(push,1)// This make compiler allocate the structure memory just according to the size of member variables. Without this the structure will have more memory than the size of the variables. 
//#pragma pack(pop)//Undo pack pragma
struct a 
{

int a;
string s;
double d;

	
};

int main()
{cout<<sizeof(double)<<endl;
	cout<<sizeof(int)<<endl;
	cout<<sizeof(string)<<endl;
	cout<<sizeof(a);
		return 0;
}