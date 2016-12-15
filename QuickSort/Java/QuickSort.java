public class QuickSort {
	private int[] array;
	private int length;
	
	/*
	 * Handles class prep-work for QuickSort.
	 */
	
	public int[] sort(int[] rawArray){
		this.array = rawArray;
		this.length = rawArray.length-1;
		
		quickSort(0, length, array);
		
		return this.array;
	}
	
	
	/*
	 * Main Quick Sort method, called recursively to split vector into smaller
	 * vectors and sort until vector is completely sorted.
	 */
	private int[] quickSort(int low, int high, int[] array){
		
		int partitionLow = low;
		int partitionHigh = high;
		int holder;
		
		int pivot = (low+high)/2;
		
		while (partitionLow <= partitionHigh){
			while(array[partitionLow] < array[pivot]){
				partitionLow++;
			}
			while(array[partitionHigh] > array[pivot]){
				partitionHigh--;
			}
			if (partitionLow <= partitionHigh){
				holder = array[partitionLow];
				array[partitionLow] = array[partitionHigh];
				array[partitionHigh] = holder;
				partitionLow++;
				partitionHigh--;
			}
		}
		
		if (low < partitionHigh)
			quickSort(low, partitionHigh, array);
		if (partitionLow < high)
			quickSort(partitionLow, high, array);
		
		return array;
	}
	
}
