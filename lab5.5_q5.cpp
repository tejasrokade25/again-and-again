#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<"    *****"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<(3-i);j++)
		{cout<<" ";}
		cout<<"*   *"<<endl;
	}
	cout<<"*****"<<endl;
	return 0;
}
