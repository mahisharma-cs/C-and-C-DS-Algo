package cube1;
class cube{
	int l=10,b=20,h=30;
	public static int cubes=50;
	public static int getcubes(){
		return cubes;
	}
	public cube(){
		cubes++;
	}
}
public class cube1{
	public static void main(String Args[]){
		System.out.println("Number of cubes = "+cube.cubes);
		System.out.println("Number of cubes(method) = "+cube.getcubes());
	}
}