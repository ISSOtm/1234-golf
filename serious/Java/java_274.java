public class java_274 {

	public static void main(String[] args) {
		StringBuilder builder = new StringBuilder();
		int i = builder.toString().length();
		i++;
		i++;
		i = i * i;
		for (int j = i / i; j <= i; ++j) {
			builder.append(j);
		}
		System.out.print(builder.toString());
	}

}