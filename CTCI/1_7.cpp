/*#include<iostream>
using namespace std;

void zeroMatrix(int** mat,int M,int N){
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(mat[i][j]==0){
				mat[i][0]=0;
				mat[0][j]=0;
			}
		}
	}

	for(int i=M-1;i>0;i--){
		if(mat[i][0]==0){
			for(int j=0;j<N;j++){
				mat[i][j]=0;
			}
		}
	}
	for(int i=N-1;i>0;i--){
		if(mat[0][i]==0){
			for(int j=0;j<M;j++){
				mat[j][i]=0;
			}
		}
	}
	if(mat[0][0]==0){
		for(int i=0;i<M;i++){
			mat[i][0]=0;
		}
		for(int i=0;i<N;i++){
			mat[0][i]=0;
		}
	}
}
int main(){
	int N=4;
	int M=5;
	int **mat = new int*[M];
	for(int i=0;i<M;i++){
		mat[i]=new int[N];
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			mat[i][j]=i+j;
		}
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cout<<mat[i][j];
		}
		cout<<endl;
	}
	mat[4][3]=0;
	mat[1][1]=0;
	zeroMatrix(mat,M,N);
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cout<<mat[i][j];
		}
		cout<<endl;
	}
}*/
