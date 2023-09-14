#include <stdio.h>
#include <stdlib.h>

void move(int, int, int, int);


int main()
{

    int kiekot =  3;

    int torni1 = 1;
    int torni2 = 2;
    int torni3 = 3;

    move(kiekot, torni1, torni2, torni3);



    return 0;
}



void move(int kiekot, int a, int b, int c){


        if(kiekot == 1){

            printf("%d --> %d\n", a, b);

        }else{

            move(kiekot - 1, a, c, b);

            printf("%d ---> %d\n", a, b);

            move(kiekot - 1, c, b, a);

        }

return;
}
