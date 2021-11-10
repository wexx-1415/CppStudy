# Lab0
## 实验目的
1. 理解书本内容：人与人之间根本就是无法理解的，更何况人和书这种死物
2. 提高调试程序能力：笑死，带专上到现在断点都不知道咋玩

## 实验要求
1. 安装虚拟机，安装Linux操作系统
2. 使用Linux下VI编辑器编写hello world C语言程序，使用GCC编译器编译，并输出结果。
3. 使用GDB调试工具进行反汇编

我的评价是：
1. 怎么把我Linux的桌面换成二刺螈涩图，目前比较喜欢的初始化桌面只有红色和蓝色
2. 第二步编译之后发现我和眼前的电脑隔了一层可悲的厚障壁了
3. 调试爬，真男人查bug永远都是肉眼看
## 实验内容
### 1.Linux更换壁纸
首先打开我的Linux：  
![image](https://user-images.githubusercontent.com/77609544/141062213-35417188-a294-4291-bcb6-9d5257e1f46b.png)  
↑哥们上次去机房没网装中文，现在在装  
然后想办法问魔法海螺：  
![image](https://user-images.githubusercontent.com/77609544/141062334-c302c392-5e00-469b-bd60-9c4c145d0839.png)  
大哥们给的办法都是安装一个Xshell连接到ip，感觉很蠢，不想下  
所以我决定直接在Linux里面联网找一个就行  
![~X_2JQSWDJ% 3E2G30B)4BY](https://user-images.githubusercontent.com/77609544/141068321-ec884045-c5be-41e0-ac02-06282b2ebbd1.jpg)  
![image](https://user-images.githubusercontent.com/77609544/141068462-6191908e-221f-4d9c-a1ee-7be44c6e8b32.png)
### 2.使用Linux下VI编辑器编写hello world C语言程序，使用GCC编译器编译，并输出结果
![image](https://user-images.githubusercontent.com/77609544/141068628-6cf5e959-7b88-4f8b-bcd4-22a33435dd83.png)  
问了助教，这个按照数据库格式写是错的，当不存在就行  
已经被vscode惯坏了不想用vim，fk  
Def：**Vim是从vi发展出来的⼀个⽂本编辑器。代码补完、编译及错误跳转等⽅便编程的功能特别丰富，在程序员中被⼴泛使⽤**    
**vim有三种模式：**  
* 命令模式Command mode
    * 启动vim时，进入命令模式；该状态下敲键盘会被识别为命令而不会在页面中输入字符
    * `i`切换到输入模式，可以输入字符
    * `x`删除当前光标上的字符
    * `:`切换到底线命令模式，在最后一行输入命令
* 输入模式Insert mode
    * `字符按键+shift`输入字符
    * `enter`换行
    * `backspace`退格键，删除光标前⼀个字符
    * `del`删除键，删除光标后⼀个字符
    * `方向键`移动光标
    * `HOME/END`移动光标到⾏⾸/⾏尾
    * `Page Up/Page Down`上/下翻⻚
    * `Insert`切换光标为输⼊/替换模式，光标将变成竖线/下划线
    * `ESC`退出输⼊模式，切换到命令模式
* 底线命令模式Last line mode
    * 底线命令模式可以输⼊单个或多个字符的命令，可⽤的命令⾮常多
    * `q`退出程序
    * `w`保存文件
    * `ESC`退出底线命令模式

学校给的图：  
![image](https://user-images.githubusercontent.com/77609544/141071419-e99876bb-9ef9-4d7a-a12d-7a0c3e29080e.png)  
![image](https://user-images.githubusercontent.com/77609544/141071472-cc17e4bb-6ba8-4e0f-8b03-13bcd86e8fe8.png)  

**编写HelloWorld的C源程序**  
![image](https://user-images.githubusercontent.com/77609544/141072206-4af57452-6b09-4cf6-9721-364e0221c7b9.png)  
因为这里不熟练重写了好几次，这东西是真的反人类啊..写好之后还需要用`:`进入底线命令模式输入`wq`保存并退出  
于是我的home上就有了这个，直接双击可以gedit打开   
![image](https://user-images.githubusercontent.com/77609544/141072506-06bd9ddb-5ee8-47bc-8a76-514ff260f157.png)  
输入命令行：  
```linux
$ gcc -g -Wall hello.c -o hello
```
运行之后就会有一个可执行文件  
![image](https://user-images.githubusercontent.com/77609544/141073177-5a6e4896-8ddb-4cac-b86e-03d2d252bf00.png)  
再在命令行直接执行：  
![image](https://user-images.githubusercontent.com/77609544/141073254-f8472f10-6574-40d4-a3bd-3a41c4f10496.png)  





