import java.util.Scanner;
class array3{
	int b;
	int min(int arr[]){
		int min=arr[0];
		for(int i:arr)
			if(i<min) min=i;
		return min;
	}
	public static void main(String args[]){
		arr3 a=new arr3();
		a.b=10;
		int array[]={2,9,8,-11,7,0,99,334,55},min;
		min=a.min(array);
		System.out.println(a.b+"min in the array: "+min);
	}
}
