#define _XOPEN_SOURCE 500

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct node {
    unsigned int count;
    unsigned int next;
    unsigned long *value;
    unsigned int *index;
    struct node *child['z' - 'a' + 1];
};

void init_node(struct node *n)
{
    n->value = 0;
    memset(n->child, 0, sizeof(n->child));
    return;
}

struct node *insert_node(struct node *r, char *s)
{
    int i;
    int j;
    struct node *n;

    n = r;
    for (i = 0; s[i] != 0; i++) {
        j = s[i] - 'a';
        if (n->child[j] == NULL) {
            n->child[j] = malloc(sizeof(struct node));
            init_node(n->child[j]);
        }
        n = n->child[j];
    }

    return n;
}

int main()
{
    int dc;
    int f;
    char **g;
    int gc;
    int *h;
    int i;
    int j;
    int k;
    int l;
    unsigned long max;
    unsigned long min;
    struct node **n;
    struct node *p;
    char *s;
    struct node *t;
    unsigned long x;

    s = malloc(sizeof(char) * (4 * 1024 * 1024));
    
    scanf("%d", &gc);
    
    g = malloc(sizeof(char *) * gc);
    for (i = 0; i < gc; i++) {
        scanf("%s", s);
        g[i] = strdup(s);
    }
    
    h = malloc(sizeof(int) * gc);
    for (i = 0; i < gc; i++) {
        scanf("%d", &h[i]);
    }

    t = malloc(sizeof(struct node));
    init_node(t);
    
    n = malloc(sizeof(struct node *) * gc);
    for (i = 0; i < gc; i++) {
        n[i] = insert_node(t, g[i]);
    }
    
    for (i = 0; i < gc; i++) {
        n[i]->count++;
    }

    for (i = 0; i < gc; i++) {
        if (n[i]->next == 0) {
            n[i]->value = malloc(sizeof(unsigned long) * n[i]->count);
            n[i]->index = malloc(sizeof(unsigned int) * n[i]->count);
        }
        
        n[i]->value[n[i]->next] = h[i];
        n[i]->index[n[i]->next] = i;
        n[i]->next++;
    }
    
    scanf("%d", &dc);

    min = -1;
    max = 0;
    while (dc > 0) {
        scanf("%d %d %s", &f, &l, s);
        
        x = 0;
        for (i = 0; s[i] != 0; i++) {
            p = t;
            for (j = i; s[j] != 0; j++) {
                p = p->child[s[j] - 'a'];
                if (p == NULL) {
                    break;
                }
                
                for (k = 0; k < p->count; k++) {
                    if (p->index[k] < f) {
                        continue;
                    }
                    
                    if (p->index[k] > l) {
                        break;
                    }
                    
                    x += p->value[k];
                }
            }
        }
        
        if ((min == -1) || (x < min)) {
            min = x;
        }
        
        if (x > max) {
            max = x;
        }
                
        dc--;
    }
    
    printf("%ld %ld\n", min, max);
    return 0;
}
