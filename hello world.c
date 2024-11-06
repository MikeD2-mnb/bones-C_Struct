#include <stdio.h>
#include "b_test.c"
#define n 3

char Max_dev_No = 3;

struct bat1{
	float V_Cells[8] ;
};

//struct bat1 b[n];

int main(){
	struct bat1 b[n];
	for (int i = 0; i<Max_dev_No; i++){
		for (int j=0;j<8;j++){
			b[i].V_Cells[j]=3.35;
		}
		
	}
	b_acc(1,b[1].V_Cells);
	printf("hello world\n");
	printf("V2.3  %0.3f\n",b[1].V_Cells[3]);
	return(0);
}