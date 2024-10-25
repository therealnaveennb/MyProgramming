import java.util.*;
class linearSearch{
    
    // public static int search(int[] arr,int val,int size,int index){
    //     if(index==size) return -1;
    //     if(arr[index]== val) return index;
    //     else  return search(arr,val,size,index+1);
    // }
    
    static List<Integer> result = new ArrayList<>();
    
    public static void searchList(int[] arr, int val, int size, int index){
        if(index==size) return ;
        if(arr[index]== val){ result.add(index);
        System.out.println(index);}
        searchList(arr,val,size,index+1);
    }
    public static void main(String[] args) {
        int size;
        Scanner scan =new Scanner(System.in);
        System.out.println("Enter the size of array");
        size = scan.nextInt();
        result.add(Integer.MAX_VALUE);
        int[] arr =new int[size];
        
        for(int i=0;i<size;i++){
            System.out.println("Enter the element "+(i+1));
            arr[i]=scan.nextInt();
        }   

        System.out.println("Enter the value to search");
        
        int val =scan.nextInt();
        // System.out.println(search(arr, val, size, 0));
        
        searchList(arr, val, size, 0);
        
        for(int i:result){
            System.out.println(i);
        }
    }
}