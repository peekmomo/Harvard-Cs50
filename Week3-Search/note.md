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
冒泡排序 ：
