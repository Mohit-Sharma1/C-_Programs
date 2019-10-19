//C program to find greatest number from entered four numbers
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<conio.h>
int main() {
	int a,b,c,d;
	printf("Enter the values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d) {                            // If statement condition is about to test if it is true then the below statement will  execute
		printf("the greater number is a=%d",a);
     }
	else if(b>a&&b>c&&b>d)  {                     // If false then the else statement will be executed
    printf("the greater number is b=%d",b);
    
    }
	else if(c>a&&c>b&&c>>d) {
		printf("the greater number is c=%d",c);
    }
	else if(d>a&&d>b&&d>c) {
		printf("the greter number is d=%d",d);
	}
   
  	getch();
}
#You can also use this code for this propose
    #include<stdio.h>
    int main()
    {
        int a = 1, b = 6, c = 3, d = 4;
        int max;
        // Find the greater number in a or b.
        max = (a > b? a : b);  
        /* Find the greater number in c and d, and compare to the previously
           found maximum in a and b. */
        max = (c > d? (c > max? c : max) : (d > max? d : max));
        printf("Max: %d\n", max);
        return 0;
    }
