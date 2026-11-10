#include <windows.h>
#include <iostream>
using namespace std;
// 检测按键是否被按下
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1 : 0)
int main() {
   int interval = 100; // 默认点击间隔（毫秒）
   cout << "请输入点击间隔（毫秒）：";
   cin >> interval;
   cout << "按住左Shift键开始连点，松开停止。" << endl;
   while (true) {
       if (KEY_DOWN(VK_LSHIFT)) { // 检测左Shift键是否按下
            // 防止误触
           while (KEY_DOWN(VK_LSHIFT)) {
               mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); // 模拟鼠标左键点击
               Sleep(interval); // 等待指定间隔
           }
       }; // 减少 CPU 占用
   }
   return 0;
}
