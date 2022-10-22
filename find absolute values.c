int xminusy(int x,int y){
    int z;
    if(x-y==0)
    {
       z=0;
       return z;
    }

    if((x-y)<0)
    {
        z = (x-y)* -1;
        return z;
    }
    else
    {
        z =x-y;
        return z;
    }

}
int zminusx(int z,int x)
{
    int p;
if ((z+z+z)-(x+x)==0)
    {
        p=0;
        return p;

    }
    if ((z+z+z)-(x+x)<0){
        p=(z+z+z)-(x+x);
        return (-1*p);

            }
else{
    p=(z+z+z)-(x+x);
    return p;
}

}
int main(){
    int a,b,c;
    printf("3 sayi giriniz");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d", xminusy(a,b));
    printf("\n");
    printf("%d",zminusx(c,a));
   return 0;
}
