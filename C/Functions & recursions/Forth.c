# include <stdio.h>

int calcsum(int a, int b);


int main()  {
int a = 78;
int b = 22;

int sum = calcsum (a, b);
printf("Sum is : %d\n", sum);

return 0;
}

int calcsum(int a, int b) {
return (a+b);

}