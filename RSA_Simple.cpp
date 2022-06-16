#include<iostream>
#include<vector>
#include <string>
#include<cmath>
#include <typeinfo>

bool Simple_num(int a);
int RSA_keys(int p1, int q1);
int RSA_crypt(int test2, int e1, int n1);
int RSA_De_crypt(int test2, int d1, int n1);
int main()
{


double l=108;
double ol=5;
double g=300;
double lol = pow(l, ol);
lol = pow(lol,g);
lol=fmod(lol,300);
std::cout<<lol;

int p ,q,n,e,d,s1;

std::cin>> p >>q;

RSA_keys(p,q);


std::cin>> e >>n>>s1;
RSA_crypt(s1,e,n);
std::cin>> d >>n>>s1;
double temp1;
temp1=pow(s1,d);
std::cout<<temp1;
temp1= fmod(temp1, n);
std::cout<<temp1<<'\n';
RSA_De_crypt(s1,d,n);




	return 0;
}
/*int RSA_crypt(int test2, int e1, int n1){

	
	
		test2=pow(test2,e1);
		test2= test2%n1;
		std::cout<<test2<<'\n';
	

}*/

int RSA_De_crypt(int test2, int d1, int n1){
	double temp1;
		temp1=pow(test2,d1);
		std::cout<<temp1;
		temp1= fmod(temp1, n1);
		std::cout<<temp1<<'\n';
}

int RSA_crypt(int test2, int e1, int n1){

	
	 double temp;
		temp=pow(test2,e1);
		temp= fmod(temp, n1);
		std::cout<<temp<<'\n';
}

int RSA_keys(int p1, int q1){
	int n, e, d=1 ,f;
	n = abs(p1*q1);
	f = (p1-1)*(q1-1);
	for (int i = 0; i < f	; ++i)
	{
		if (Simple_num(i)&& f%i!=0){
				e=i;
				break;
		}
	}
	std::cout<<e<<' '<<n<<'\n';

	while(true){
	if ((d*e)%f==1 && e!=d){
		
		break;
	}
	d++;
}
std::cout<<d<<' '<<n<<'\n';
}


bool Simple_num(int a){
	int count=0;
	for(int j=1; j<=a/2; j++){
		
		if (a%j==0){
			count++;
			if (count>1){
				break;
			}
		} 

	}
	if (count==1){
		return true;
	} else {
		return false;
	}
}


