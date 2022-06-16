#include <iostream>
	
using namespace std;

/*void print(int *arr, int row){
	for (int i=0; i<row; i++){
		for (int j=0; j<row; j++) {
			cout<<arr[i][j]<<'\t';
		}
		cout<<'\n';
	}
	cout<<'\n';
}*/



int main(){
	int a_1,b_1,a_2,b_2;
	int num;
	int chet = 0;
	int q;
	cout<<"razmer matrix: ";
	cin>>a_1>>b_1;
	//cin>>b_1;
	cout<<endl;
	int matrix[a_1][b_1];   //запонение матрицы 1
	for (int i=0; i<a_1; i++){
		for (int j=0; j<b_1; j++) {
			cin>>num;
			matrix[i][j]=num;
		}
	}
	for (int i=0; i<a_1; i++){
		for (int j=0; j<b_1; j++) {
			cout<<matrix[i][j]<<'\t';
		}
		cout<<'\n';
	}
	cout<<"razmer matrix2: "; // заполнение матрицы 2
	cin>>a_2>>b_2;
	//cin>>b_2;
	cout<<endl;
	int matrix2[a_2][b_2];
	for (int i=0; i<a_2; i++){
		for (int j=0; j<b_2; j++) {
			
			cin>>num;
			matrix2[i][j]=num;
		}
	}
	for (int i=0; i<a_2; i++){
		for (int j=0; j<b_2; j++) {
			cout<<matrix2[i][j]<<'\t';
		}
		cout<<'\n';
	}





	int b,a,i,sum,W,H;
	int mainMatrix[a_1][b_2]; //результрущая матрица гдн а_1 колиZ
	if (b_1==a_2){
	a=sum=0;
	W=0;
	H=0;
	i=0;
		while (q!=1){
			b=0;
			sum=0;			
			for (int j = 0; j <a_2 ; j++)
			{
				//cout<<'1';
				sum+=matrix[a][b]*matrix2[j][i];
				b+=1;
			}
			//cout<<sum<<endl;
			mainMatrix[W][H]=sum;
			H++;
			i++;
			if (i==b_2){
				a++;
				i=0;
				W++;
				H=0;
			}
			else if (W==a_1 && H==b_2-1){
				q=1;
				//cout<<"tyt"<<endl;
		}
		}

	}else{
		cout<<"ne verniy format"<<endl;
	}
	cout<<endl;
	for (int i=0; i<a_1; i++){
		for (int j=0; j<b_2; j++) {
			cout<<mainMatrix[i][j]<<'\t';
			//cout<<"tyt"<<endl;
		}

		cout<<'\n';
	cout<<'\n';
	}
	
	cout<<'\n';
	return 0 ;
}









