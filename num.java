class num
{
	public static void main(String arg[])
	{
		int x=0,y=0;
		
		//y= x++ + x++ + x + ++x;
		//System.out.println("x : "+x);
		//x=++x;
		//System.out.println("x : "+x);
		//x=x++;
		//System.out.println("x : "+x);
		//x=++x;
		//////////////x = ++x + x++ + ++x;
		y=x++ + ++x + ++x + x++;
		System.out.println("x : "+x);
		System.out.println("y : "+y);
	}
}