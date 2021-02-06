#include <iostream>
#include <string.h>
using namespace std;

int checkValidity(char *ordering, int length);

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char order [100];
        scanf("%s", order);
        int length = strlen(order);
        cout << (checkValidity(order, length) == 0 ? "no" : "yes") << endl;
    }

    return 0;
}

int checkValidity(char *order, int length) {
    for (int i = 0 ; i < length ; i+=2) {
        if (order[i] == order[i + 1]) {
            return 0;
        }
    }

    return 1;
}