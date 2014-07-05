/*//
//  1_6.cpp
//  CTCI
//
//  Created by Edison on 6/25/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
void swap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}
void rotateMatrix(int** mat,int N){
	for(int i=0;i<ceil(N/2);i++){
		for(int j=i;j<(N-i)-1;j++){
			swap(mat[i][j],mat[j][N-1-i]);
			swap(mat[i][j],mat[N-1-i][N-1-j]);
			swap(mat[i][j],mat[N-1-j][i]);
		}
	}
}
int main(){
    int N=6;
    int **mat;
    mat = new int* [N];
    for(int i=0;i<N;i++){
        *(mat+i) = new int [N];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            mat[i][j]=i+j;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    rotateMatrix(mat,N);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}*/
