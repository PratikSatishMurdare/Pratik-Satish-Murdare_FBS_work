void main()
{
	int year=2025;
	if(year%400==0||year%4==0&&year%100!=0)
	{
		printf("year is leap");
	}
	else
	{
		printf("year is not leap");
	}
	
}