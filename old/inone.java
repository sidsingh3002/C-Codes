class inone
{
	int x;
	int y; 
	public static void main(String ar[])
	{
		inone st=new inone();
		st.input(4,9);
		st.display();
	}
	void input(int a, int b)
	{
 		x=a;
		y=b;
	}
	void display()
	{
		System.out.println("X="+x+ ",y="+y);
	}
	}
