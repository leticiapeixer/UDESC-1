public class Triangle {
	double area;
	int height;
	int length;

	public static void main(String args[]) {
		int x = 0;
		Triangle[] ta = new Triangle[4];
		while (x < 4) {
			ta[x] = new Triangle();
			ta[x].height = (x + 1) * 2;
			ta[x].length = x + 4;
			ta[x].setArea();
			System.out.print("triangulo " + x + ", area");
			System.out.println(" = " + ta[x].area);
			x = x + 1;
		}
	}

	void setArea() {
		area = (height * length) / 2;
	}
}