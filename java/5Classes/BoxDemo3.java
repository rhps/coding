class Box
{
	double width;
	double height;
	double depth;

	void volume()
	{
		System.out.print("Volume is ");
		System.out.println(width * height * depth);
	}
}

	class BoxDemo3
	{
		public static void main(String[] args)
		{
			Box mybbox1 = new Box();
			Box mybbox2 = new Box();

			mybbox1.width = 10;
			mybbox1.height = 20;
			mybbox1.depth = 15;

			mybbox2.width = 3;
			mybbox2.height = 9;
			mybbox2.depth = 9;

			mybbox1.volume();
			mybbox2.volume();
		}
	}
