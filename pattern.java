class pattern
{
	public static void main(String arg[])
	{
//		int arr[5][5];
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(i==0 || (j==2 && i<4) || (i==4 && j<2))
				{
					System.out.print("* ");
				}
				else
					System.out.print("  ");
			}
			System.out.println();
		}
	}
}