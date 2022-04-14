#include<stdio.h>
int main(){
    int H,W,h,w;
    scanf("%d %d",&H,&W);
    scanf("%d %d",&h,&w);
    int cells = (H-h)*(W-w);
    printf("%d",cells);
}

