import java.util.Scanner;

public class LinearSearch {
    static int linearSearch(int[] arr, int size, int key) {
        for(int i=0; i<size; i++){
            if(arr[i] == key) {
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int[] arr = {10, 6, 44, 55, 77, 24};
        int size = arr.length;
        int key;
        key = input.nextInt();

        int index = linearSearch(arr, size, key);

        if(index != -1) {
            System.out.println("Element found at " + index);
        } else {
            System.out.println("Element not found");
        }
    }
}
