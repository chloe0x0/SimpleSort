import java.random;

/*
 * Implementation of the Simple Sort Algorithm in Java for integer arrays
 */
public class SimpleSort {
    public void sort(int arr[]) {
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
        int arr[10] = {6, 7, 1, 5, 2, 5, 16, 0, 17, 5};
        for (int i : arr) {
            System.out.println(i);
        }
        sort(arr);
        for (int i : arr) {
            System.out.println(i);
        }
    }
}

