#include <iostream>
#include <vector>	
using namespace std;

int MAX(vector<int> vec1, int b){
 int temp1=0;
 for (int i = 0; i < b; ++i)
 {
 	if (vec1[i]>temp1)
 	{
 		temp1=vec1[i];
 	}
 }
 cout<<temp1;
 return 0;
}

int main()
{
	int count, temp,a;
	cin>>count;

	vector<int> vec;
	for (int i = 0; i < count; ++i)
	{
		cin>>temp;
		vec.push_back(temp);
	}

	for (int i = 0; i < count; ++i)
	{
		cout<<vec[i]<<' ';
	}
	cout<<'\n';

	cin>>a;
	MAX(vec,a);
	return 0;
}