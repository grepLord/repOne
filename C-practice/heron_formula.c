#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    for (int i = 0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if((calc_area(tr[i].a, tr[i].b, tr[i].c))>(calc_area(tr[j].a, tr[j].b, tr[j].c)))
            {
               int *arr_temp = malloc(1 * sizeof(triangle));

               arr_temp[0]=tr[i].a;
               arr_temp[1]=tr[i].b;
               arr_temp[2]=tr[i].c; 

               tr[i].a=tr[j].a;
               tr[i].b=tr[j].b;
               tr[i].c=tr[j].c;

               tr[j].a=arr_temp[0];
               tr[j].b=arr_temp[1];
               tr[j].c=arr_temp[2];
               
               arr_temp[0]=arr_temp[1]=arr_temp[3]=0;
            }
        }
    }
}

int calc_area(int a, int b, int c)
{
    float p = (a + b + c)/2;   
    return (int)sqrt(p*(p-a)*(p-b)*(p-c));
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}

// method 2

/*

float calc_area(triangle tr) {
    float p = (tr.a+tr.b+tr.c)/2.0;
    return sqrt(p*(p-tr.a)*(p-tr.b)*(p-tr.c));
}
void sort_by_area(triangle* tr, int n) {
    triangle temp;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (area(tr[i])>area(tr[j])) {
                temp = tr[i];
                tr[i] = tr[j];
                tr[j] = temp;
            }
        }
    }
}
*/


// method 3
/*
int heron(triangle *t){
    int twop=t->a+t->b+t->c;
    return twop*(twop-2*t->a)*(twop-2*t->b)*(twop-2*t->c);
}

int heron_comp(const void *a, const void *b){
    return heron((triangle*)a) - heron((triangle*)b);
}

void sort_by_area(triangle* tr, int n) {
    qsort(tr, n, sizeof(*tr), heron_comp);
}
*/