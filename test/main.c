#include <stdio.h>
#include <stdlib.h>
#include "trans.h"

int main(void)
{
	double mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	trans(3,3,mat);


	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%f ",mat[i][j]);
		}printf("\n");
	}
	return 0;
}