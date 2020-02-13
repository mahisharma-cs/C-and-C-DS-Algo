class vehicle {
	protected String brand="Ford";
	public void honk(){
		System.out.println("Trust..!Trust..!");
	}
}
class car extends vehicle{
	private String modelName="Mustang";
	public static void main(String Args[]){
		car mycar = new car();
		mycar.honk();
		System.out.println(mycar.brand+" "+mycar.modelName);
	}
}