int main() {
    int n; 
    int m; 
    scanf("%i %i", &n, &m);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for (int b_i = 0; b_i < m; b_i++) {
       scanf("%i",&b[b_i]);
    }
    int x,d=b[0];
    for(int i=0;i<m;i++){
        if(b[i]>b[0]){
            d=b[i];
        }
    }
    for(i=0;i<d;i++){
        if((x%a[i]==0)&&(b[i]%x==0))
    }
    printf("%d\n", total);
    return 0;
}