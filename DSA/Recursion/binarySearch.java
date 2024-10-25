import java.util.Scanner;


public class binarySearch {
    
    
    public static int binarySearch(int[] arr,int low, int high, int val){
        if(high<low) return -1;
        int mid= (high +low)/2;
        if(arr[mid]==val) return mid;
        else if(arr[mid]>val) return binarySearch(arr, low, mid-1, val);
        else return binarySearch(arr, mid+1, high, val);
    }
    public static void main(String[] args) {
        Scanner scan =new Scanner(System.in);
        int [] arr={1,2,3,4,5,6,7,8};
        int size= arr.length;
        for(int i:arr)System.out.print(i+" ");
        System.out.println("Enter the Value to Search ");
        int val =scan.nextInt();
        System.out.println(binarySearch(arr,0,size-1,val));
    }
}
