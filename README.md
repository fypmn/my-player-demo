# playerdemo

一个视频播放器，原作者  
https://itisyang.github.io/playerdemo/

## 简介
- 使用 FFmpeg-3.4 (x64) 解码，SDL2-2.0.7 (x64) 渲染。  
- 在 Windows 下使用 Qt5.12.x (MinGW x64) 开发。  
- 项目目录下的 .pro 文件，支持在多平台（Windows、Linux、Mac）下 QtCreator 打开编译调试。  

![playerdemo_play](https://cdn.staticaly.com/gh/itisyang/MyImages@master/images/playerdemo_play.png)

## Linux平台编译调试  
1. 安装 SDL2相关的开发包 libsdl2-dev。  
    ```
    sudo apt-get install libsdl2-dev
    ```
2. 安装 FFmpeg相关的开发包 libavformat-dev、libavutil-dev、libavcodec-dev、libswscale-dev...
    ```
    sudo apt-get install libavformat-dev
    sudo apt-get install libavutil-dev
    sudo apt-get install libavcodec-dev
    sudo apt-get install libswscale-dev
    ```
3. 使用 QtCreator 打开 playerdemo.pro。  
4. 编译运行。  

## 其他

    编译时，注意统一静态库与动态库的版本、位数。若开发环境为64位，库及头文件均要64位。  
    tag中的打包版本使用actions打包，不包含ffmpeg和SDL2动态库，后续研究如何一起打包。

