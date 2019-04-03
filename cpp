  int a[8];
   cout<<"Enter 7 elements for array";
   for(i=0;i<8;i++)
   cin>>a[i];
		int i,j,temp;
		cout<<a;
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				if(a[j]>a[j+1])
				{
					temp = a[j];
					a[j]=a[j+1];
					a[j+1]=a[j];
					
				}
			}
		}
		

	cout<<a;
