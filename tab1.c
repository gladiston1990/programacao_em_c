#include <stdio.h>


int main(){
    int tab[10][10];
    int x, y;

     for(x=1;x<10;x++)
    {
        printf("\n");
        for(y=1;y<10;y++)

        {
        tab[x][y]=x*y;
        printf("%d x %d = %d\t",y,x,tab[x][y]);
        }
    }

    return(0);
}
