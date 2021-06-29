
/*Sort an array of 0s, 1s and 2s in linear time complexity, like this one:
1 into [30] = { 2, 2, 1, 0, 1, 0, 1, 1, 0, 2, 2, 1, 1, 1, 2, 0, 0, 1, 1, 0, 1, 0, 1, 2, 0, 0, 0,1, 1, 2 };

Given an array consisting only 0s, 1s and 2s, please provide an algorithm sorting that array in
O(n) time complexity. So in the resulting sorted array, 0s will be at starting, then the 1s & then the
2s.

*/
#include <stdio.h>


/* First Function call
arrange the o array values in order {0, 1, 2} */
void rearrange012(int o[], int arr_size)
{
	int low = 0;
	int high = arr_size - 1;
	int mid = 0;

	while (mid <= high) {
		switch (o[mid]) {
			
		case 0:
			/*    call the change place function */
			changePlace(&o[low++], &o[mid++]);
			
			break;
	
		case 1:
			mid++;
			
			break;
			
		case 2:
			
				/*    call the change place function */			
			changePlace(&o[mid], &o[high--]);
			
			break;
		}
	}
}

/* change place function */
void changePlace(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}



/* print the sorted array*/
void printArray(int o[], int arr_size)
{
	int i;
	for (i = 0; i < arr_size; i++)
		printf("%d ", o[i]);

}

int main()
{
	int o[30] = {2, 2, 1, 0, 1, 0, 1, 1, 0, 2, 2, 1, 1, 1, 2, 0, 0, 1, 1, 0, 1, 0, 1, 2, 0, 0, 0,1, 1, 2 };
	int arr_size = 30; 
	int i;

	rearrange012(o, arr_size);

	printArray(o, arr_size);

	getchar();
	return 0;
}
