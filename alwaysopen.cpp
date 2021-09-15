#include <stdio.h>
// #include <conio.h>
int sum(int );
int  main() {
 int n, result;
 printf("Enter a positive integer: ");
 scanf("%d", &n);
 result = sum(n);
 printf("sum = %d", result);
//  getch();
 return 0;
}
int sum(int num) {
if(num==0)return 0;
else return num+sum(num-1);
}
//puneet
