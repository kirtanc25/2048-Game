//#include"fullscreen.cpp"
#include"classFun.cpp"

int main()
{
  Game_2048 G_obj;
 //fullscreen();
  system("mode 1000");
  starting();
  system("color F");
  G_obj.start_grid();

  while(1)
  {

  G_obj.display_grid();
  G_obj.key_press();
  G_obj.logic_flow(&G_obj);
  G_obj.game_end_check(&G_obj);
  }



  return 0;
}
