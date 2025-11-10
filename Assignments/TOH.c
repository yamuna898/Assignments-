#include <stdio.h>

void TOH(int n, char Source, char Helper, char Destination) {
    // Base case: agar sirf 1 disk hai, seedha move kar do
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", Source, Destination);
        return;
    }

    // Step 1: Top n-1 disks ko Source se Helper pe move karo (Destination ko help ke liye use karte hue)
    TOH(n - 1, Source, Destination, Helper);

    // Step 2: Last disk ko Source se Destination pe move karo
    printf("Move disk %d from %c to %c\n", n, Source, Destination);

    // Step 3: Jo n-1 disks Helper pe thi, unhe ab Helper se Destination pe move karo (Source ko helper ke jaise use karo)
    TOH(n - 1, Helper, Source, Destination);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    printf("\nSequence:\n");
    TOH(n, 'L', 'M', 'R');
    return 0;
}
