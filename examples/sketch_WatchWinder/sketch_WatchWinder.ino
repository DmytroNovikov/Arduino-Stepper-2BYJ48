/*

  I like mechanical watches. I like listening to their heartbeats in an empty room.
  You'll never feel alone with your little ticker.
  
But it is some kind of problem if you have got more than one self-winding mechanical watch.
  You have to wind them every day. I knew about watch winders, but I want to create that one by myself!


  Цикл:

      - 30 мин 150 оборотов по часовой стрелке

      - 30 мин 150 оборотов против часовой стрелки

       -3 часа покоя

За сутки выполняется 6 циклов.
	
За цикл выполняется 300 оборотов.
5 оборотов в минуту или 1 оборот за 12 секунд.


*/


#include <STEPPER_ULN2003APG_2BYJ48.h>

#include <Stepper_2BYJ48.h>



Stepper_2BYJ48 stepper(8, 9, 10, 11, 5);



void setup()
{
}



void loop()
{

  // 150 оборотов по часовой стрелке в течении 30 мин

  stepper.makeRevolutions(150);

  // 150 оборотов против часовой стрелке в течении 30 мин

  stepper.makeRevolutions(-150);

  // 3 часа покоя

  for(int i = 0; i < 3600; i++)

    delay(3000);

}
