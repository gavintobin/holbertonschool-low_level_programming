unsigned int mypow(unsigned int a, unsiged int b)
{
	unsigned int num = a, i = 1;

	if (b ==0)
		return(1);

	while (i < b)
	{
		num *= a;
		i++;
	}
	return (num);
}
