# include <stdio.h>

//declairing prototype
void printHello();
void printGoodbye();

int main () {

printHello();  /* calling the function   */
printGoodbye(); /* calling the function */   

return 0;
}

//function define
void printHello() {
printf("Hello!\n");
}

void printGoodbye() {
printf("Goodbye!\n");

}