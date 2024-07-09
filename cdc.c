#include<dos.h>

int main( ){
    initwindow( 400 , 400 , "Graphics using Dev-C++");
    setcolor(YELLOW);
    for(int i=5; i<=150; i+=5) {
    circle(200, 200, i);
    }
        
    getch();
    return 0;
}
