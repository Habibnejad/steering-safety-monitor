#include <stdio.h>

// Simple steering safety monitor example.
int main() {
    double steeringAngleData[] = {0, 10, 25, 15, 40};
    double maxSafeAngle = 30.0;
    int n = sizeof(steeringAngleData) / sizeof(steeringAngleData[0]);
    for (int i = 0; i < n; ++i) {
        double angle = steeringAngleData[i];
        if (angle > maxSafeAngle) {
            printf("Warning: Steering angle %.2f exceeds safe limit!\n", angle);
        } else {
            printf("Steering angle %.2f within safe limit.\n", angle);
        }
    }
    return 0;
}
