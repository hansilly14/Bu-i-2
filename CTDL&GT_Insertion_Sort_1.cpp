Sile chương số 3 
  Void sxchentructiep(int a[], int i)
{
	int pos, x;
	for(int i=1; i<n; i++)
	{
		x=a[i]; pos=i-1;
		while(pos>=0&&a[pos]>x)
		a[pos+1]=a[pos-1];
		a[pos+1]=x;
	}
}
