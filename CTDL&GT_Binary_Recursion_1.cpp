https://freetuts.net/de-quy-nhi-phan-binary-recursion-2953.html
dệ quy nhị phân là ham gọi lại 2 lần chính nó 
int fib(int n){
if(n <= 2) return 1; // điểm dừng
return fib(n - 1) + fib(n - 2);
} 
