
#include <iostream>
#include "ex01-library.h"

//Author: Xiaohan Lyu, s182354
//C++ exam 2019, problem 1



using namespace std;

//Exercise 1 (a) Implement this function
cell ** createAndInitBoard(int n){
	//put your code here
  cell ** A = new cell *[n];
  for(int i = 0; i<n; i++){
    A[i] = new cell [n];

  }
  //init
	for(int i = 0; i < n; i++){
		for(int j = 0; j <n; j++){
			A[i][j].color = computeColor(i,j);


		}

	}
    for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(A[i][j].color ==dark&&i>=0&&i<=2){
            A[i][j].status=blackPiece;
        }else if(A[i][j].color ==dark&&i>=n-3&&i<=n){
            A[i][j].status=whitePiece;
        }else{

            A[i][j].status=empty;
        }
    }
	}

  return A;
}

//Exercise 1 (b) Implement this function
cell ** duplicateBoard(cell ** A, int n){
	//put your code here
    cell ** B = new cell *[n];
	for(int i = 0; i<n; i++){
		B[i] = new cell[n];
		for(int j = 0; j<n; j++){
			B[i][j] = A[i][j];
		}
	}
	return B;

}

//Exercise 1 (c) Implement this function
bool moveRight(cell ** A,int n,int r, int c){
	//put your code here
    //cell ** C = duplicateBoard(A,n);
    //if(C[r][c].status!=empty){return false;}
    if(A[r][c].status==whitePiece){
        if(A[r-1][c+1].status!=empty||r-1<0){return false;}else{
        if(r-1<0||c+1>7){return false;}else{
        A[r][c].status=A[r-1][c+1].status;
         A[r-1][c+1].status=whitePiece;
        A[r][c].status=empty;
        }}
    }
    if(A[r][c].status==blackPiece){
        if(A[r+1][c-1].status!=empty||c-1<0){return false;}else{
            if(r+1>7||c-1<0){return false;}else{
        A[r][c].status=A[r+1][c-1].status;
        A[r+1][c-1].status=blackPiece;
        A[r][c].status=empty;
        }}
    }
return A;

}

//Exercise 1 (d) Implement this function
bool moveLeft(cell ** A,int n,int r, int c){
	//put your code here
   // cell ** C = duplicateBoard(A,n);
   // if(C[r][c].status!=empty){return false;}

    if(A[r][c].status==whitePiece){
        if(A[r-1][c-1].status!=empty){return false;}else{
        if(r-1<0||c-1<0){return false;}else{
        A[r][c].status=A[r-1][c-1].status;
        A[r-1][c-1].status=whitePiece;
        A[r][c].status=empty;
        }}
    }
    if(A[r][c].status==blackPiece){
            if(A[r+1][c+1].status!=empty){return false;}else{
        if(r+1>7||c+1>7){return false;}else{
        A[r][c].status=A[r+1][c+1].status;
        A[r+1][c+1].status=blackPiece;
        A[r][c].status=empty;
        }}
    }
return A;

}

//Do not modify
cellColor computeColor(int r,int c){
	if((r%2 == 0 && c%2 == 0) || (r%2 != 0 && c%2 != 0)){
		return bright;
	}
	return dark;
}

//Do not modify
void printBoard(cell ** A, int n){
	cout << ' ';
	for(int c=0;c<n;c++){
		cout << c;
	}
	cout << endl;
	for(int r=0;r<n;r++){
		cout << r;
		for(int c=0;c<n;c++){
			//Print ' ' or '#' if empty, or the piece color (W or B)
			switch (A[r][c].status) {
			case empty:
				cout << ((A[r][c].color==bright)?' ':'#');
				break;
			case whitePiece:
				cout << "W";
				break;
			case blackPiece:
				cout << "B";
				break;
			}
		}
		cout << endl;
	}
	cout << endl;
}
