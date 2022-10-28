#include<stdio.h>
#include<conio.h>
#include<math.h>

int sender(int b[10],int k){
int checksum, sum = 0, i;
printf ("\n~~~~SENDER~~~~\n");  
for (i = 0; i < k; i++)
    sum += b[i];
    printf ("Sum: %d", sum);             
    	checksum =~ sum;
    	printf ("\nSender's Checksum: %d", checksum);
    	return checksum;
}
 
int receiver(int c[10], int k, int scheck){
int checksum, sum = 0, i;
printf ("\n\n~~~~RECEIVER~~~~\n");
for (i = 0; i < k; i++)
   	sum += c[i];
   	printf ("Sum: %d", sum);
   	sum = sum + scheck;
	checksum =~ sum;
    printf ("\nReceiver's Checksum: %d", checksum);
return checksum;
}

main(){
    int a[10],i,m,scheck,rcheck;
    printf ("\nNumber of inputs: ");
    scanf ("%d", &m);
    printf ("\nEnter inputs: ");
    for (i = 0; i < m; i++)
    	scanf ("%d", &a[i]);
    	scheck = sender(a, m);
    	rcheck = receiver(a, m, scheck);
    	if (rcheck == 0)
      		printf("\n\nNO ERROR IN TRANSMISSION\n\n");
    	else
      		printf("\n\nERROR DETECTED");
    getch();
} 
