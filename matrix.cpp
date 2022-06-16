#include <iostream>
#include <cstdlib> //библиотека для рандома
#include <ctime>   //тоже для рандома
#include <cmath>	
using namespace std;


void copy (int arr[][6],int arr2[][6], int row)
{
    for (int i = 0; i < row; i++){
    	for (int j = 0; j < row; j++){
    		arr2[i][j] = arr[i][j];
		}
	}
}

int sum_matrix (int arr_mat[][6], int row2){
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

void print(int arr[][6], int row){
	for (int i=0; i<row; i++){
		for (int j=0; j<row; j++) {
			cout<<arr[i][j]<<'\t';
		}
		cout<<'\n';
	}
	cout<<'\n';
}


int main(){
	const int a = 6;
	int x,y,j,i,b,fg,chet,delta;
	float T = 0.5;
	double W,P;
	int sum,sum2,choose;
	srand(time(NULL));
	chet=0;
	int matrix[a][a];	
	int matrix2[a][a];
	int glav[a][a];
	cin>>b;
	for (i=0; i<a; i++){
		for (j=0; j<a; j++){
			choose= rand()%2;
			if (choose==0){
				choose= -1;
			}else choose= 1;			
			matrix[i][j]=choose;
			matrix2[i][j]=choose;
			glav[i][j]=choose;
		}
	}
	print(matrix,a);
	for (fg=0; fg<b; fg++){
		x= rand()%a;
		y= rand()%a;
		sum=sum2=0;
		matrix2[x][y]= matrix2[x][y]* (-1) ;
		chet++;
		sum= sum_matrix(matrix,a);
		sum2= sum_matrix(matrix2,a);
		delta = sum2-sum; //#рвзность суии матриц
	    if (delta<=0){    //#заменяет Е старую на е новую 
	    	copy(matrix2,matrix,a);
	        copy(matrix,glav,a);
	    }else{  // # мат. дейсвия 
	        W=exp(-delta/T);
	        float rnd= rand()%100;
	       	P= 1 / (rnd + 1);
	        if (W>=P){   //# Е остаеться без изменения, main сохраняет значение E	
    			copy(matrix,glav,a);        
	        }else if (W<0){  // # Е принимает значеине самой первой матриц	        	
	        	copy(glav,matrix,a); 
	        }	
		}
	}
	cout<<chet<<'\n';
	print(matrix,a);
	return 0 ;
}









