import java.util.Arrays;

public class Arrays_train {

	public static void main(String[] args) {
		int[] arr = {2, 3, 1, 5, 4};
		int[] arr2 = {1, 2, 3, 4, 5};
		
		System.out.print("Initial" + " array: ");
		for (int i = 0; i < arr.length; i++)
			System.out.print(arr[i]);

		System.out.print("\n");		
		Arrays.sort(arr);
		System.out.print("Sorted array: ");
		for (int i = 0; i < arr.length; i++)
			System.out.print(arr[i]);
		
		System.out.print("\n");		
		if (Arrays.equals(arr, arr2))
			System.out.print("The two arrays are equal");
		
		System.out.print("\n");		
		Arrays.fill(arr, 7);
		System.out.print("Filled array: ");
		for (int i = 0; i < arr.length; i++)
			System.out.print(arr[i]);
		
	}
}
