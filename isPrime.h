int isPrime(int n){
	int i,p=0;
	if(n==0 || n==1)
	{
		printf("invalid entry");
		
	}
	
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			p=1;
			break;
		}
	}
	
	if(p==0)
		return 1;
}