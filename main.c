#include <kipr/wombat.h>

int main()
{
    camera_open();
    camera_update();
    printf("get_object_count: %d\n",get_object_count(0));
    
    
    while( 0==0)
    {
        camera_update();
         printf("get_object_center: %d\n",get_object_center_x(0,0));
        if(get_object_center_x(0,0) < 70)
        {
            camera_update();
            motor(0,10);
            motor(3,-10);
        }
        if(get_object_center_x(0,0) > 100)
        {
            motor(0,-10);
            motor(3,10);
        }
        else
            //(get_object_center_x(0,0) ==85)
        {
            while(get_object_area(0,0) <2000)
    {
        camera_update();
        motor(0,50);
        motor(3,50);
    }
    
        ao();
        }
    }
    return 0;
}
