#include <stdio.h>
#include <stdlib.h>

struct bag { long w, h; };

int compare(const void *a, const void *b) {
    struct bag *p1 = (struct bag *)a;
    struct bag *p2 = (struct bag *)b;
    if (p1->w != p2->w) return (p1->w > p2->w) - (p1->w < p2->w);
    return (p1->h > p2->h) - (p1->h < p2->h);
}

int main() {
    int n;
    scanf("%d", &n);
    struct bag bags[1001];
    for (int i = 0; i < n; i++)
        scanf("%ld %ld", &bags[i].w, &bags[i].h);
    qsort(bags, n, sizeof(struct bag), compare);
    long L[1001] = {0};
    long res = 0;
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++) {
            if (bags[j].w < bags[i].w && bags[j].h < bags[i].h)
                if (L[j] + 1 > L[i]) L[i] = L[j] + 1;
            if (L[i] > res) res = L[i];
        }
    printf("%ld", res + 1);
}
