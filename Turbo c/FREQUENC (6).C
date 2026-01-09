//frequency counter
#include <stdio.h>
#include<conio.h>
void main() {
    int arr[100], brr[100], cnt[100];
    int n, i, j, k = 0, flag;
    //clrscr();
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the elements in the array:\n");
    for(i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }

    // Find unique elements and count their occurrences
    for(i = 0; i < n; i++) {
	flag = 0;
	// Check if arr[i] is already in brr
	for(j = 0; j < k; j++) {
	    if(arr[i] == brr[j]) {
		flag = 1;
		break;
	    }
	}

	// If not present, add to brr and count occurrences
	if(flag == 0) {
	    brr[k] = arr[i];
	    cnt[k] = 1;
	    k++;
	} else {
	    cnt[j]++;
	}
    }

    // Display the result
    printf("Element occurrences:\n");
    for(i = 0; i < k; i++) {
	printf("%d = %d\n", brr[i], cnt[i]);
    }

    getch();
}
