#include <stdio.h>
#include <string.h>

void substring(char[], char[], int , int );
	void main()
	{
	    char c[10],str[10];
	    int i, j, len;
        printf("Enter the string:");
        scanf("%s",str);
        len = strlen(str);
	    printf("All subsets for the given string are:  ");
	    //This loop maintains the starting character
	    for(i = 0; i < len; i++){
	        //This loop adds the next character every iteration for the subset to form and add it to the array
	        for(j = 1; j <= len-i; j++){
	            substring(str,c,i,j);
	            printf("%s\n",c);
	        }
	    }
	    return 0;
	}

	void substring(char s[], char sub[], int p, int len){
		   int c = 0;
		   while (c < len) {
		      sub[c] = s[p+c];
		      c++;
		   }
		   sub[c] = '\0';
		}


/*
Enter the string:raehho
All subsets for the given string are:  r
ra
rae
raeh
raehh
raehho
a
ae
aeh
aehh
aehho
e
eh
ehh
ehho
h
hh
hho
h
ho
o
*/
