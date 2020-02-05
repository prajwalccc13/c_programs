#include<stdio.h>
#include<conio.h>
#include<math.h>


void printArray(int A[], int size){
	int i;
	printf("[");
	for(i=0; i<size; i++){
		printf("%d,",A[i]);
	}
	printf("]");
}



void lshiftr(){
	int  A[4]={0,0,0,0}, Q[4]={1,0,1,0}, c= 1;
	int i, shbit[9], temp[9];
	shbit[0] = c;

	for(i=1;i<9;i++){
		if(i < 5)
			shbit[i] = A[i-1];
		else
			shbit[i] = Q[i-5];
	}

	A[0] = c;
	c = 0;
	for(i=1;i<8;i++){
		if(i<4){
		       A[i] = shbit[i];
		} else {
			Q[i-4] = shbit[i];
		}
	}
	printf("\n\nLogical shift right:\n");
	printf("%d", c);
	printArray(A,4);
	printArray(Q, 4);
}


void ashiftr(){
	int A[4]={0,0,0,0}, Q[4]={1,0,1,0}, c=1;
	int i, shbit[9], temp[9];
	shbit[0] = c;

	for(i=1;i<9;i++){
		if(i < 5)
			shbit[i] = A[i-1];
		else
			shbit[i] = Q[i-5];
	}

	A[0] = c;
	for(i=1;i<8;i++){
		if(i<4){
		       A[i] = shbit[i];
		} else {
			Q[i-4] = shbit[i];
		}
	}
	printf("\n\nArithmetic shift right:\n");
	printf("%d", c);
	printArray(A,4);
	printArray(Q, 4);
}


void lshiftl(){
	int A[4]={0,0,0,0}, Q[4]={1,0,1,0}, c=1;
	int i, shbit[9], temp[9];
	shbit[0] = c;

	for(i=1;i<9;i++){
		if(i < 5)
			shbit[i] = A[i-1];
		else
			shbit[i] = Q[i-5];
	}

	Q[3] = 0 ;
	c = shbit[1];
	for(i=8;i>=2;i--){
		if(i>5){
		       Q[i-6] = shbit[i];
		} else {
			A[i-2] = shbit[i];
		}
	}
	printf("\n\nLogical Shift left:\n");
	printf("%d", c);
	printArray(A,4);
	printArray(Q, 4);
}


void ashiftl(){
	int A[4]={0,0,0,0}, Q[4]={1,0,1,1}, c=1;
	int i, shbit[9], temp[9];
	shbit[0] = c;

	for(i=1;i<9;i++){
		if(i < 5)
			shbit[i] = A[i-1];
		else
			shbit[i] = Q[i-5];
	}

	c = shbit[1];
	for(i=8;i>=2;i--){
		if(i>5){
		       Q[i-6] = shbit[i];
		} else {
			A[i-2] = shbit[i];
		}
	}
	printf("\n\nArithmetic shift left:\n");
	printf("%d", c);
	printArray(A,4);
	printArray(Q, 4);
}


int main(){
	clrscr();

	lshiftr();
	ashiftr();

	lshiftl();
	ashiftl();

	getch();
	return 0;
}