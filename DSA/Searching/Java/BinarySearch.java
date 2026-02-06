import java.util.Scanner;

public class BinarySearch {
    static int binarySearch (int[] arr, int size, int key) {
        int start = 0;
        int end = size - 1;

        while(start <= end) {
            int mid = (start + end) / 2;

            if(arr[mid] == key) {
                return mid;
            } else if (arr[mid] < key) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    public static void main() {
        Scanner input = new Scanner(System.in);

        int[] arr = {6, 10, 20, 30, 55, 75, 190};
        int size = arr.length;

        int key;
        key = input.nextInt();

        int index = binarySearch(arr, size, key);

        if(index != -1) {
            System.out.println("Element found at " + index);
        } else {
            System.out.println("Element not found");
        }

    }
}
