#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long int mul, a, b, c;
        scanf("%lld %lld %lld %lld", &mul, &a, &b, &c);
        long long int d = mul / (a * b * c);

        if (a * b * c * d == mul) {
            printf("%lld\n",d);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
