import java.random;
import java.util.Arrays; 

/*
 * Implementation of the Simple Sort Algorithm in Java for integer arrays
 */
public class SimpleSort {
    public static void sort(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i] < arr[j]) {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int arr[] = {6, 7, 1, 5, 2, 5, 16, 0, 17, 5};
        System.out.println(Arrays.toString(arr));
        sort(arr);
        System.out.println(Arrays.toString(arr));
    }
}