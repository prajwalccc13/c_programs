#include<stdio.h>
#include<conio.h>
#include<math.h>

int A[4]={0,0,0,0}, Q[4]={1,0,1,0}, Qminus=0, M[4], Mcomp[4], count=4;


void printArray(int A[], int size){
	int i;
	printf("[");
	for(i=0; i<size; i++){
		printf("%d,",A[i]);
	}
	printf("]");
}



void ashiftr(){
	int i, shbit[9], temp[9];

	for(i=0;i<8;i++){
		if(i < 4)
			shbit[i] = A[i];
		else
			shbit[i] = Q[i];
	}
	shbit[8] = Qminus

	A[0] = shbit[0];
	Qminus = sh[7]
	for(i=1;i<8;i++){
		if(i<4){
		       A[i] = shbit[i-1];
		} else {
			Q[i-4] = shbit[i-1];
		}
	}
	printf("\n\nArithmetic shift right:\n");
	printf("%d", c);
	printArray(A,4);
	printArray(Q, 4);
}


void add(){
	int i, s[4], c=0;
	//printf("\n\n%d %d %d %d %d \t", c, A[0], A[1], A[2], A[3]);
	//printf(" %d %d %d %d \t",  Q[0], Q[1], Q[2], Q[3]);
	for(i=3;i>=0;i--){
		s[i] = (A[i] + M[i] + c) % 2;
		c=(A[i] + M[i] + c) / 2;
	}
	for(i=0;i<4;i++)
		A[i] = s[i];
	//printf("\n%d %d %d %d %d \t", c, A[0], A[1], A[2], A[3]);
	//printf(" %d %d %d %d \t",  Q[0], Q[1], Q[2], Q[3]);
}

void complement(){
	int i;
	for(i=0; i<4; i++){
		Mcomp[i] = 1 - M[i];
	}
}


void subtract(){

}

void bothsAlgorithm(){
	int i;

	printf("Enter the value of Multiplicand:");
	for(i=0; i<4; i++){
		scanf("%d", M[i]);
	}
	printf("\nEnter the value of Multiplier:);
	for(i=0; i<4; i++){
		scanf("%d", Q[i]);
	}

	complement();

	while(count>0){
		if(Q[0]==1 && Qminus==0){
			subtract();
		}
		if(Q[0]==0 && Qminus==1){
			add();
		}
		ashiftr();
		count = count - 1;
	}
	printf("\n\nProduct = ");
	print(A, 4);
	print(Q, 4);
}


int main(){
	clrscr();

	bothsAlgorithm();

	getch();
	return 0;
}