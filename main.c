#include <stdio.h>
int main(void){
    int i,j,m,n,tmp,max;
    
    scanf("%d",&n);
    scanf("%d",&m);
    
    int model[m],singar[m],score[n];
    
    for(i=0;i<m;i++){
        scanf("%d",&tmp);
        model[i] = tmp;
    }
    
    
    for(i=0;i<n;i++){
        score[i] = 100;
        for(j=0;j<m;j++){
            scanf("%d",&tmp);
            singar[j] = tmp;
            if((model[j] - singar[j])*(model[j] - singar[j]) <= 25){
                continue;
            }else if((model[j] - singar[j])*(model[j] - singar[j]) <= 100){
                score[i] -= 1;
            }else if((model[j] - singar[j])*(model[j] - singar[j]) <= 400){
                score[i] -= 2;
            }else if((model[j] - singar[j])*(model[j] - singar[j]) <= 900){
                score[i] -= 3;
            }else{
                score[i] -= 5;
            }
        }
        if(score[i] <= 0){
            score[i] = 0;
        }
    }
    
    
    max = score[0];
    for(i=0;i<n;i++){
        if(max<score[i]){
            max = score[i];
        }
    }
    
    printf("%d",max);
}
