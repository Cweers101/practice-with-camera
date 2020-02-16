#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    camera_open();
    camera_update();
    
    
      while (get_object_count(0) == 0)    
      {    motor(0,50);
    motor(3,50);
      camera_update(); //get image
if (get_object_count(0) > 0) 
{
ao();



   
    while (get_object_count(1) == 0) 
{ 
         motor(0,50);
    motor(3,50);
      camera_update(); //get image
if (get_object_count(1) > 0) 
{
ao();
    
camera_close();
}
}
}
    }
    
    
    
    return 0;
}
