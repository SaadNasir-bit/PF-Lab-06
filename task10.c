#include <stdio.h>

int main() {
    int rating;
    int excellent = 0, satisfactory = 0, needsImprovement = 0;
    printf("Enter performance ratings (0-100).\nEnter -1 to stop.\n");
    printf("Enter rating: ");
    scanf("%d", &rating);
    while (rating != -1) {
        if (rating >= 85) {
            excellent++;
        }
        else if (rating >= 60) {
            satisfactory++;
        }
        else if (rating < 60) {
            needsImprovement++;
        }
        printf("Enter rating: ");
        scanf("%d", &rating);
    }
    printf("Excellent: %d\n", excellent);
    printf("Satisfactory: %d\n", satisfactory);
    printf("Needs Improvement: %d\n", needsImprovement);
}
