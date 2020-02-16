#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    camera_open_black();
    camera_update();
   while (get_object_count(0) == 0)    
    {
        camera_update();
        motor(0,20);
        motor(3,-10);
        camera_update();
        
        if(get_object_count(0) > 0)
        {
            printf("gotcha/n");
            camera_update();
            motor(0,100);
            motor(3,100);
            
            camera_update();
            
        }
        camera_close();
   }
    return 0;
}
