# padavan
padavan汉化文件

##一、padavan项目地址
https://bitbucket.org/padavan/rt-n56u

##二、文件说明

1. 目录结构同原项目目录结构

2. 添加中文语言文件，修复页面显示问题

3. 添加部分机型适配文件

##二、汉化文件使用方法

1. 编辑install.sh，修改DESTDIR为你的项目目录

 默认 `DESTDIR=~/bitbucket/rt-n56u`

2. 执行install.sh将文件复制到你的项目中

 `sh install.sh`

3. 编辑你的项目trunk目录下的.config，修改语言配置项

 `CONFIG_FIRMWARE_INCLUDE_LANG_CN=y`

4. 编译项目

##三、机型适配文件说明

1. 机型适配文件位于`padavan/trunk/configs/boards`目录下，每个文件夹对应一个机型，需手动将所需机型适配文件复制到项目对应文件夹下

2. 编辑你的项目trunk目录下的.config，修改对应配置
 
 例如：编译newifi d1固件的配置

 `CONFIG_PRODUCT=MT7621`
 
 `CONFIG_FIRMWARE_PRODUCT_ID="NEWIFI-D1"`
