#include<stdio.h>
int main()
{
	int t,i,n,j,l,k;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int ar[100][3],m=0,count=0,max=0,p=0,b=0;
	  scanf("%d",&n);
	  for(j=1;j<=n;j++)
	    {
	  	  for(k=j+1;k<=n;k++)
	  	   {
	  	  	   for(l=k+1;l<=n;l++)
	  		   {
	  			  if(j+k+l==n)
	  			  {
	  			  	 if(j*j+k*k==l*l)
	  			  	 {
	  			  	 	 ar[m][0]=j;
	  			  	 	 ar[m][1]=k;
	  			  	 	 ar[m][2]=l;
	  			  	 	 m++;
	  			  	 	 count++;
	  			  	 }
	  			  } 
	  		   }
	  	   }
	    }
	    /*for(j=0;j<=count-1;j++)
      {
      	for(k=0;k<=count-1;k++)
      	{
      	    if(ar[j][0]*ar[j][1]*ar[j][2]<ar[k][0]*ar[k][1]*ar[k][2])
      	     {
      	     	p++;
      	     	break;
      	     }
        }
        if(p==0)
        {
        	printf("%d\n",ar[j][0]*ar[j][1]*ar[j][2]);
        	b++;
        	break;
        }
      }
      if(b==0)
      {
      	printf("-1\n");
      }*/
      for(j=0;j<=count-1;j++)
      {
      	for(k=0;k<=2;k++)
      	{
      	    printf("%d ",ar[j][k]);
        }
        printf("\n");
      }
	}
	return 0;
}
