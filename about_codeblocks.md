## codeblocks使用
##### [官方网站软件下载](http://www.codeblocks.org/)
##### [汉化包下载](https://pan.baidu.com/s/1bpETXFp)
***
### 下载注意事项
如果电脑不具备编译器，而且你不想因为安装一个工具多添麻烦的话，请注意下载``mingw-setup.exe``版本。（对于windows)  
这个版本自带了编译器，省去了很多麻烦。
### 解决编译器报错
如果发现出现了这个问题导致无法编译
![问题](https://github.com/Wanakiki/photo/blob/master/e87a5a370db0859d4de75a3a3c775dee_r.jpg)  
需要重设路径，比较简单的方法就是点击自动查找  
<img src="https://github.com/Wanakiki/photo/blob/master/chazao.png" width="50%" height="50%">
### 汉化
1. 将文件解压，将解压出来的 locale文件夹拷贝至CodeBlocks安装目录下的share\CodeBlocks。（右键CodeBlocks的快捷方式，单击打开文件所在位置可以快速找到安装目录）
2. 打开CodeBlcoks，Settings  -> Environment.. ->View ，勾上Internationlization(will take place afterrestart),在后面的复选框中选择Chinese(Simplified)，重启CodeBlocks。
### 设置支持C99标准（允许for（int i=0;i<n;i++））
- Setting->Compiler->Global compiler settings->Other options (设置->编译器设置->全局编译器设置->其他编译器设置)
- 在文本框中输入 ``-std=c99``
<img src="https://github.com/Wanakiki/photo/blob/master/hexie.png" width="50%" height="50%">
