#include <stdio.h>
#include <stdlib.h>


int trans(int m, int n, double mat[][n])
{
	for(int i=0;i<m;i++)
		for(int j=i;j<n;j++)
		{
			double temp = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = temp;
		}
		return 0;
}

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