
int main(){
    int tabuada[10][10];
    int x, y;

     for(x=1;x<10;x++)
    {
        printf("\n");
        for(y=1;y<10;y++)

        {
        tab[x][y]=x*y;
        printf("%d x %d = %d\t",y,x,tabuada[x][y]);
        }
    }

    return ( 0 );
}
