#include <iostream>
#include <cstdlib> //библиотека для рандома
#include <ctime>   //тоже для рандома
#include <cmath>	
using namespace std;


void copy (int **arr,int **arr2, int row)
{
    for (int i = 0; i < row; i++){
    	for (int j = 0; j < row; j++){
    		arr2[i][j] = arr[i][j];
		}
	}
}
int sum_sun(int arr_ma[][4], int row3){
int sum_alll = 0;
	for (int i = 0; i < row3; ++i)
	{
		for (int j = 0; j < row3; ++j)
		{
			sum_alll += arr_ma[i][j];
		}
	}
	return sum_alll;

}
int sum_matrix (int arr_mat[][4], int row2){
	int sum_all = 0;
	for (int i=0; i<row2; i++){
		for (int j=0; j<row2; j++){
			if (j==row2-1 && i!=row2-1){
				sum_all+=arr_mat[i][j]*arr_mat[i][0]+arr_mat[i][j]*arr_mat[i+1][j];
				
			}else if (i==row2-1 && j!=row2-1){
				sum_all+=arr_mat[i][j]*arr_mat[0][j]+arr_mat[i][j]*arr_mat[i][j+1];
				
			}else if (i==row2-1 && j==row2-1){
				sum_all+=arr_mat[i][j]*arr_mat[i][0]+arr_mat[i][j]*arr_mat[0][j];
				
			}else {
				sum_all+=arr_mat[i][j]*arr_mat[i][j+1]+arr_mat[i][j]*arr_mat[i+1][j];
				
			}
		}	
	}
	return sum_all;
}

void print(int arr[][4], int row){
	for (int i=0; i<row; i++){
		for (int j=0; j<row; j++) {
			cout<<arr[i][j]<<'\t';
		}
		cout<<'\n';
	}
	cout<<'\n';
}


int main(){
	const int a = 4;
	int x,y,j,i,b,fg,chet,delta;
	
	int sum,sum2,choose;
	
	chet=0;
	int matrix[a][a];	
	int matrix2[a][a];
	int glav[a][a];
	for (i=0; i<a; i++){
		for (j=0; j<a; j++){
			choose= 1;			
			matrix[i][j]=choose;
			matrix2[i][j]=choose;
			glav[i][j]=choose;
		}
	}
	print(matrix,a);

	x=-1;
	y=0;
	cout<< sum_matrix(matrix2,a)<<" ";
	cout<<sum_sun(matrix2,a)<<endl;
			

	while(true)
	{ if (x>-1){
		if (matrix[y][x]!= -1){ 
		matrix[y][x]*= -1;
	}
	}
	
	//sum= -(sum_matrix(matrix,a));
	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < a; ++j)
		{	
			if (matrix2[i][j]!= -1){ 
			copy(matrix,matrix2,a);
			matrix2[i][j]*= -1;
			cout<< sum_matrix(matrix2,a)<<" ";
			cout<<sum_sun(matrix2,a)<<endl;
			b++;
		}
		}
	}
	if(x==a){
		x=0 ;
		y++;
		print(matrix2, a);
	}else{
		x++;
		print(matrix2, a);
	}
	
	if (x==a && y==a){
		
		break;
	}
	//b++;
	}
	cout<<b;
	return 0 ;
}









