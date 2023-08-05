/*
 ============================================================================
 Name        : primarr.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,j,flag=0,position;

	 int a[]={3,4,5,6,7,8,11,9,13,10};
	    n=10;
	    printf(" Array : ");
	       for (i = 0; i <n; ++i)
	       	printf("%d\t", a[i]);

	    for(i=0;i<n;i++)
	        {
        	 for(int j=2; j<a[i]; j++)
        	 {
        		 if(a[i]%j==0){
        			flag=1;
        			break;
	              }
             }
        	 if(flag==0)
        	 {
        		 position=i;
        		 n=n-1;

        	 for(j=position;j<n;j++){
        		 a[j]=a[j+1];
        	 }
        	 }
        }
	    printf("\n Array::");
	           for (i = 0; i <n; ++i)
	             	   printf("%d \t",a[i]);



	return EXIT_SUCCESS;
}
