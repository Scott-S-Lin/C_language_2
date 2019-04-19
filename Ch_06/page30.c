void set_ptr2(int *p,int *ar);
void set_ptr(int **p,int *ar);

void show_1d(int ar[],int size)
{
    int i=0;

    for ( ; i<size; i++)
        printf("ar[%d]=%-5d <--%p\n",i,ar[i],&ar[i]);
}

int main()
{
    int a[3]={2,4,8};
    int b[3]={3,6,9};
    int *ptr=a;

    set_ptr2(ptr,b);
    show_1d(ptr,3);
    set_ptr(&ptr,b);
    show_1d(ptr,3);
    
    return 0;
}

void set_ptr2(int *p,int *ar)
{
    p=ar;
}

void set_ptr(int **p,int *ar)
{
   *p=ar;
}
