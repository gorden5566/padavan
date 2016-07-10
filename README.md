# padavan
padavan汉化文件

一、padavan项目地址
https://bitbucket.org/padavan/rt-n56u

二、文件说明

1. 目录结构同原项目目录结构

2. 对原项目中的语言文件进行了翻译

二、汉化文件使用方法

1. 编辑install.sh，修改DESTDIR为你的项目目录

 默认 `DESTDIR=~/github/rt-n56u`

2. 执行install.sh将文件复制到你的项目中

 `sh install.sh`

3. 编辑你的项目trunk目录下的.config，修改语言配置项

 `CONFIG_FIRMWARE_INCLUDE_LANG_CN=y`

4. 编译项目

