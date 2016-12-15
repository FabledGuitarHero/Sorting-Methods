import java.util.*;

public class MergeSortDriver {

	public static void main (String []args){
		int[] data = {41,23,54,33,53,2222,333,753};
		System.out.println("Before: " + Arrays.toString(data));
		
		MergeSort SortMachine = new MergeSort();
		data = SortMachine.sort(data);
		
		System.out.println("After: " + Arrays.toString(data));
	}
}
