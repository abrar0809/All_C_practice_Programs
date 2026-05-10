/*Accept a coordinate point $(x, y)$ from the user.Handle the cases where the point lies on the X-axis, the Y-axis, or the Origin (0,0).Input (0, 5) should output "On the Y-Axis," not "Quadrant I".*/

#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the X-axis value = ");
    scanf("%d",&x);
    printf("Enter the Y-axis value = ");
    scanf("%d",&y);
    if(x==0 && y==0){
        printf("On the Origin (0,0)");
    }
    else if(x==0 && (y>0 || y<0)){
        printf("On the Y-axis (%d,%d).",x,y);
    }
    else if((x<0 || x>0) && y==0 ){
        printf("On the X-axis (%d,%d).",x,y);
    }
    else if(x>0 && y>0){
        printf("In the Quadrant I (%d,%d).",x,y);
    }
    else if(x>0 && y<0){
        printf("In the Quadrant II (%d,%d).",x,y);
    }
    else if(x<0 && y<0){
        printf("In the Quadrant III (%d,%d).",x,y);
    }
    else if(x<0 && y>0){
        printf("In the Quadrant IV (%d,%d).",x,y);
    }else{
        printf("Enter valid values. !!!");
    }
    return 0;
}