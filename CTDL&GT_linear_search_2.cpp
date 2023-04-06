Em lấy tù bài thuyết trình của nhóm em 
//Hàm nhập mảng
int nhapmang(int a[]) {
    int n = 0;
    while (1) {
        printf("Nhap phan tu thu %d (nhap -1 de ket thuc): ",n+1); 
//nhập các phần tử vào mảng, nhập -1 thì sẽ ngưng nhập
        scanf("%d", &a[n]);
        if (a[n] == -1) {
            break; 
        }
        n++;
    }
    return n;  //n chính là số tổng số phần tử của mảng 
}
//Hàm xuất mảng 
void xuatmang(int a[], int n) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
//Hàm tìm kiếm
int timkiem(int a[],int n,int x){
	int i=0;
	while (i<n && a[i]!=x)
		i++;
	if(i==n)
	return -1; 
	else 
	return i;
}
int main() {
    int n, x;
    int a[100]; 
    n=nhapmang(a);
    xuatmang(a, n); 
    printf("Nhap vao phan tu can tim kiem: ");
    scanf("%d", &x);
    int sophantu = timkiem(a, n, x); 
    if (sophantu == -1) {
        printf("Khong tim thay phan tu %d trong mang\n", x);
    } else {
        printf("Phan tu %d co trong mang, o vi tri a[%d]\n", x, sophantu);
    }
    return 0;
}
