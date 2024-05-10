#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);

        int t = 0;
        int p = 0;

        // Read characters one by one and count wins
        for (int i = 0; i < N; i++) {
            char ch;
            scanf(" %c", &ch); 
            if (ch == 'T'){
                     t++;
            }
                
            else if (ch == 'P'){
                     p++;
            }
                  
        }

        if (t == p)
             printf("Draw\n");
            
        else if (p>t)
            printf("Pathaan\n");
        else{
             printf("Tiger\n");
        }
           
    }

    return 0;
}
