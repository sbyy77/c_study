#include <stdio.h>
/*	static memory
	merge sort
	time complexity: O(nlogn)
	space complexity: O(n)
*/
int sorted[1000];
void merge(int list[], int left, int mid, int right) {
	int l, r, m, i;
	l = left;
	m = mid + 1;
	r = left;
	while (l <= mid && m <= right) {
		if (list[l] <= list[m])
			sorted[r++] = list[l++];
		else
			sorted[r++] = list[m++];
	}
	if (l > mid) {
		for (i = m; i <= right; i++)
			sorted[r++] = list[i];
	}
	else {
		for (i = l; i <= mid; i++)
			sorted[r++] = list[i];
	}
	for (i = left; i <= right; i++) {
		list[i] = sorted[i];
	}
	
}
void merge_s(int list[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		merge_s(list, left, mid);
		merge_s(list, mid + 1, right);
		merge(list, left, mid, right);
	}
}
int main(){//merge sort
	int i, n;
	int list[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", list + i);
	}
	merge_s(list, 0, n - 1);
	for (i = 0; i < n; i++) {
		printf("%d\n", list[i]);
	}
	return 0;
}