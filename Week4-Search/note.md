rgb single symbols zero through F
RAM random access memory
& address of something  store in a pointer
int nums[]={1,2,3,4,5}
printf(*nums) printf(*(nums+1))
malloc strcpy
int main(void){
    int *x=malloc(3*sizeof(int))
    x[0]=72
    x[1]=73
    x[2]=74
    free(x)
}

allocate pointer y, but never set it to point to a pointee
