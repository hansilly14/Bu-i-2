Silde bài giảng chương số 3 
 Void sxchon(int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j =i+1;j<n;j++)
		if(a[j]<a[min])
		min=j;
		hoanvi(a[min],a[i]);
	}
}
