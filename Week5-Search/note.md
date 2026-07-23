int *tmp=malloc(4*sizeof(int))
在堆内存中申请一块能存放 4 个 int 的连续空间，并把这块空间的起始地址保存到指针 tmp 中
int *tmp = realloc(list, 4 * sizeof(int));
if (tmp == NULL)
{
    free(list);
    return 1;
}
list = tmp;
list[3] = 4;
malloc 是第一次申请内存；realloc 是调整已有内存的大小；调整时可能原地扩展，也可能换地方并自动复制旧数据。