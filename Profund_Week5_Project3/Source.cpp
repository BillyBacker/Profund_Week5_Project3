
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int r, h;
	printf("Enter Cylinder diameter : ");
	scanf("%d", &r);
	printf("Enter Cylinder height : ");
	scanf("%d", &h);
	r /= 2;
	for (int y = 0; y < (4*r)+h; y++) {
		for (int x = 0; x < 4 * r + 1; x++) {
			if ((pow((x-2*r), 2)/4)+pow(y-r, 2) < pow(r, 2)) {
				printf("= ");
			}
			else if(y < r+h && y > r) {
				printf("| ");
			}
			else if ((pow((x - 2 * r), 2) / 4) + pow(y - r - h, 2) < pow(r, 2)) {
				printf("| ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
}