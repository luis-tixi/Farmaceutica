	#include <stdio.h>

	int main() /* Rellenamos una matriz */
	{
		int x,i,numeros[3][4];
		/* rellenamos la matriz */
		for (x=0;x<3;x++)
			for (i=0;i<4;i++)
				scanf("%d",&numeros[x][i]);
		/* visualizamos la matriz */
		for (x=0;x<3;x++)
			for (i=0;i<4;i++)
				printf("%d",numeros[x][i]);
	}