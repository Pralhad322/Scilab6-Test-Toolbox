#include <stdio.h>
#include <stdlib.h>
#include "trans.h"

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