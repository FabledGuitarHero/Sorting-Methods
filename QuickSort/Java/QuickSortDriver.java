import java.util.Arrays;

public class QuickSortDriver {

	public static void main (String []args){
		int[] data = {41,23,54,33,53,2222,333,753};
		System.out.println("Before: " + Arrays.toString(data));
		
		QuickSort SortMachine = new QuickSort();
		data = SortMachine.sort(data);
		
		System.out.println("After: " + Arrays.toString(data));
	}
	
}
