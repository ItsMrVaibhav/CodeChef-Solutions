#include <iostream>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        if (n == 1 || n == 0) {
            printf("1\n");
        } else {
            int factorial = 1;

            for (int i = n ; i > 0 ; i--) {
                factorial *= n--;
            }

            printf("%d\n", factorial);
        }
    }

    return 0;
}