# include <stdio.h>
# include <math.h>

int calcpercentage(int science, int math, int history);

int main() {
int sc = 76;
int math = 66;
int history = 88;

printf("percentage is : %d", calcpercentage(sc,math,history));
return 0;

}

int calcpercentage(int science, int math, int history) {
    return ((science + math + history) / 3);

}