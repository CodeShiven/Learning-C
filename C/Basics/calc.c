# include <stdio.h>

int main() {

int a, b;
int result=1;


printf("enter a: ");
scanf("%d", &a);

printf("enter b: ");
scanf("%d", &b);

int choice;
printf("1-add, 2-sub, 3-multiply, 4-divide, 5-power :");
scanf("%d",&choice);

if (choice==1) {
result= a + b;
printf("the sum is : %d\n", result );
}
else if (choice==2) {
result= a - b;
printf("the difference is : %d\n", result);    
}  
else if (choice==3){
result= a*b;
printf("the product is : %d\n",result);    
}
else if (choice==4){
if (b != 0){    
result=a/b;
printf("the quotient is : %d\n",result);
}}
else if (choice==5) {

    for(int i = 0; i<b; i++) {
        result= result*a;
        
    }
    printf("the result is : %d\n",result);
}


else printf("invalid input! \n");

return 0;
}
