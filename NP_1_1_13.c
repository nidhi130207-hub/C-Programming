#include <stdio.h>

int main() {
    long long bytes; // Use long long for potentially large byte values

    printf("Enter the number of bytes: ");
    scanf("%lld", &bytes);

    // Conversion factors
    const double KB_FACTOR = 1024.0;
    const double MB_FACTOR = 1024.0 * 1024.0;
    const double GB_FACTOR = 1024.0 * 1024.0 * 1024.0;

    // Perform conversions
    double kilobytes = bytes / KB_FACTOR;
    double megabytes = bytes / MB_FACTOR;
    double gigabytes = bytes / GB_FACTOR;

    // Print the results
    printf("%.2f Bytes is equal to:\n", (double)bytes);
    printf("  %.2f KB\n", kilobytes);
    printf("  %.2f MB\n", megabytes);
    printf("  %.2f GB\n", gigabytes);

    return 0;
}