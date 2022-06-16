#include <iostream>
#include <cmath>
using namespace std;
// 6*6
int SumM(int mas[4][4]);
int SumE(int mas [4][4]);

int main () {
	int size = 4;
	int size_kva = pow(2,size);
	int kva[size_kva][size];
	int arr[size];
	for (int i = 0; i < size; i++){
		arr[i] = 1;
		kva[0][i] = 1;
	}
	for (int i = 1; i < size_kva; i++){
		for (int y = (size-1); y >= 0; y-=1){
			if (arr[y] == 1){
				arr[y]*=-1;
				break;
			}
			else if((arr[y] == -1) and (y>0)) {	
					arr[y]*=-1;
			}
		}
		for (int u = 0; u < size; u++){
			kva[i][u] = arr[u];
		}		
	}
	
	int mas[4][4];
	int out[100][3];
	int count = 0;
	int M = 0;
	int E = 0;
	bool crutch = true;
	
	for (int i = 0; i < 100; i++){
		for(int y = 0; y <3;y++){
			out[i][y] = 0;
		}
	}
		for (int q = 0; q < 16; q++){
			for (int w = 0; w < 16; w++){
				for (int e = 0; e < 16; e++){
					for(int u = 0; u < 16; u++){
						for(int j = 0; j < 4; j++){
							mas[0][j] = kva[q][j];
							mas[1][j] = kva[w][j];
							mas[2][j] = kva[e][j];
							mas[3][j] = kva[u][j]; // Постоянно меняющаяся строка
						}
							M = SumM(mas);
							E = SumE(mas);
							
						
						
						for (int b = 0; b<100;b++){
							if ((out[b][2] == E) and (out[b][1] == M)) {
								out[b][0]++;
							
								break;
							}else if ((M == 0) and (E == 0)){
								out[count][1] = M;
								out[count][2] = E;
								if (crutch){
									count++;
								}
								crutch = false;
							}
							else if (b == 99){
								out[count][0] = 1;
								out[count][1] = M;
								out[count][2] = E;
								count++;
							}
						}
					
			}
	}
}
}
int sum = 0;
	cout <<"|"<< "N" << '\t' <<"|"<< "M" << '\t' <<"|"<< "E"<<'\t'<<"|"<<endl;
	cout<<"*************************"<<endl;
	for (int o = 0 ; count > o; o++){
		cout <<"|"<< out[o][0] <<'\t'<<"|"<<out[o][1]<<'\t'<<"|"<<out[o][2]<<'\t'<<"|"<<endl;
		sum += out[o][0];
	}
	cout<<"*************************"<<endl;
	cout<<endl;
	cout <<"Total: "<< sum;
	return 0;
}


int SumM(int mas[4][4]){
	int sum = 0;
	for (int i = 0; i < 4; i++){
			for (int y = 0; y < 4; y++){
				sum += mas[i][y];
				}
		}  
		
	return sum;
}

int SumE(int mas[4][4]){
	int sum = 0;
	
	for (int k = 0; k < 4; k++) {
		for (int i = 0; i < 4; i++) {
		
			if (k == 0) {
				sum += mas[k][i] * mas[3][i];
			}
			else {
				sum += mas[k][i] * mas[k-1][i];
			}
			
			if (i == 3) {
				sum += mas[k][i] * mas[k][0];
			}
			else {
				sum += mas[k][i] * mas[k][i+1];
			}
		}
	}
	
	return -sum;
}
