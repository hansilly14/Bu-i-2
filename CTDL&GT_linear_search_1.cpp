Silde bài giảng chương 3
int timkiem (int a[],int n,int x)
{
   int i=0;
   while( i<n && a[i]!=x) //n là số lượng phần tử trong mảng, x là số cần tìm
	i++;
   if ( i==n)
	return -1;	//tìm hết nhưng không có x thì trả về giá trị -1.
   else
	return i; //tìm thấy a[i]=x, trả giá trị i về hàm để xuất ra vị trí của x trong mảng
}
