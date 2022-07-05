![Ampere](https://github.com/Ampere-Engine/docs/blob/main/assets/logo1.png)

<center>
Ampere is a simple game engine written in C++ inspired by Hazel. It's my first C++ projekt and i hope you will enjoy that as much as I do
</center>

```c++
#include <Ampere.h>
using namespace Ampere;

int main () {
    App MyGame;
    MyGame.SetTitle("My Game");
    MyGame.SetSize(1920, 1080);
    
    MyGame.Run();
    return 0;
}
