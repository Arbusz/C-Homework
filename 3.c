#include <stdio.h>
int main ()
{
	int a = 3;
	char *p1,p2,p3 ;
	if(a-1>0)
	{
		p1  = (char *)malloc(40 * sizeof(char)) ;
		if(a-2>0)
		{
		      p2  = (char *)malloc(40 * sizeof(char)) ;
			  if(a-3>0)
			  {
				p3 = (char *)malloc(40 * sizeof(char)) ;
			  }
			  else 
				  goto free3;
		
		}

		else
			goto free2;

	}
	else 
		goto free1;

    free1:{
				free(p1);
				p1 = NULL;
		  }
	free2:{
				free(p1);
				p1=NULL;
				free(p2);
				p2=NULL;
		  }
	free3:{
			    free(p1);
				p1=NULL;
				free(p2);
				p2=NULL;
				free(p3);
				p3=NULL;
		  }
}


