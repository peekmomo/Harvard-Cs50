algorithms: efficiency
O notation:the running time of algorithms Upper bound
O(n 2) O(n log n) O(n) O(log n) O(1)
Search 
线性查找 一个一个找 负责度 o(n)
二分查找  
 if(i==middle){
    return true
 }else if(i>middle){
    Search(middle+1,n-1)
 }else{
    Search(0,middle-1)
 }
复杂度 O(log n)
strcmp:字符串比较函数 0  positive negative
structure: 结构类型 里面可以存储不同类型的值
sort：按照规定的顺序进行排序 先找到最小的或者最大的 再找到次小的或者次大的
recursion:
冒泡排序 ：








