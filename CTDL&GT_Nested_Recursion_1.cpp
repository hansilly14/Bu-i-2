https://freetuts.net/de-quy-long-nested-recursion-2959.html
Đệ quy lồng là loại đệ quy gọi đối số của nó là một đệ quy. Hiểu đơn giản là tham số truyền vào của hàm đệ quy là một đệ quy.
  int ackerman(int m, int n){
  if(m == 0)
     return n + 1;
  else if(n == 0)
     return ackerman(m - 1, 1);
  else
     return ackerman(m-1, ackerman(m, n-1));
}
