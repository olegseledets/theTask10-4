#include <iostream>

int main() {
  int height = 15, width = 20;
  int x = height / 2, y = width / 2;
  std::string command;
  while(true){
    std::cout << "Марсоход находится на позиции: " << x << ", " << y << ", введите команду: ";
    std::cin >> command;
    if (command == "W"){
      if(x == height){
        continue;
      }
      else{
        ++x;
      }
    }
    else if (command == "A"){
      if(y == 0){
        continue;
      }
      else{
        --y;
      }
    }
    else if (command == "S"){
      if(x == 0){
        continue;
      }
      else{
        --x;
      }
    }
    else if(command == "D"){
      if(y == width){
        continue;
      }
      else{
        ++y;
      }
    }
    else{
      std::cout << "Не верная команда!\n";
    }
  }
}
/*
Задача 4. Красный Марс.
В “Спейс Инжиниринг” были впечатлены тем, как вы справились с кофемашиной и решили отдать вам на аутсорс разработку программы для нового робота-разведчика поверхности Марса. Это первый прототип, поэтому он тестируется в прямоугольном помещении размером 15 на 20 метров. Марсоход высаживается в центре комнаты, после чего управление им передаётся оператору — пользователю вашей программы. Программа спрашивает, в какую сторону оператор хочет направить робота: север (клавиша W), юг (клавиша S), запад (клавиша A) или восток (клавиша D). Оператор делает выбор, марсоход перемещается на 1 метр в эту сторону и программа сообщает новую позицию марсохода. Если марсоход упёрся в стену, то он не должен пытаться перемещаться в сторону стены, в этом случае его позиция не меняется.

Пример:

[Программа]: Марсоход находится на позиции 6, 19, введите команду:

[Оператор]: A

[Программа]: Марсоход находится на позиции 5, 19, введите команду:

[Оператор]: W

[Программа]: Марсоход находится на позиции 5, 20, введите команду:

[Оператор]: W

[Программа]: Марсоход находится на позиции 5, 20, введите команду:
*/