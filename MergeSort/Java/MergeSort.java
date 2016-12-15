
public class MergeSort {
	private int[] array;
	private int[] tempArray;
	private int length;
	
    /*
    * Copies array and handles prepwork before
    * executing the merge.
    */
	public int[] sort(int[] rawArray){
		this.array = rawArray;
		this.length = rawArray.length;
		this.tempArray = new int[length];
		
		splitArray(0, length -1);
		
		return this.array;
		
	}
	
    /*
    * Recursively splits the array into smaller
    * arrays and passes the smaller arrays to
    * the merging method.
    */
	private void splitArray(int start, int end){
		if (start < end){
			int middle = start + (end-start)/2;
			splitArray(start, middle);
			splitArray(middle+1, end);
			doMerge(start, middle, end);
		}
	}
	
    /*
    * Method that compares and the sorts the smaller
    * arrays and copies remaining data in the arrays
    */
	private void doMerge(int start, int middle, int end){
		
		for (int i = 0; i <= end; i++){
			tempArray[i] = array[i];
		}
		
		int lower = start;
		int mid = middle+1;
		int newPlace = start;
		
        
		while (lower <= middle && mid <= end){
			
			if (tempArray[lower] <= tempArray[mid]){
				array[newPlace] = tempArray[lower];
				lower++;
			}
			else {
				array[newPlace] = tempArray[mid];
				mid++;
			}
			newPlace++;
		}
		
		while (lower <= middle){
			array[newPlace] = tempArray[lower];
			lower++;
			newPlace++;
 		}
	}
	
}
