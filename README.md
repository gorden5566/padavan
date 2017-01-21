# padavan
padavan汉化文件

提供部分路由器固件下载（不定期更新，仅供测试），欢迎反馈或提出更好的建议。下载地址如下

 链接: http://pan.baidu.com/s/1o8jLp9o 密码: 4y9d

##一、padavan项目地址

项目地址: https://bitbucket.org/padavan/rt-n56u

oschina镜像（不定期同步）: https://git.oschina.net/gorden5566/rt-n56u

##二、文件说明

1. 保持原项目目录结构

2. 添加汉化文件

3. 添加部分路由器适配文件

- 联想newifi mini(NEWIFI-MINI)

- 联想newifi2(NEWIFI-D1)

- 优酷路由宝L1(YK-L1)

- 斐讯K2(PSG1218)

##二、汉化文件使用方法

1. 编辑install.sh，修改DESTDIR为你的项目目录

 默认 `DESTDIR=~/bitbucket/rt-n56u`

2. 执行install.sh将文件复制到你的项目中

 `sh install.sh`

3. 编辑你的项目trunk目录下的.config，修改语言配置项

 `CONFIG_FIRMWARE_INCLUDE_LANG_CN=y`

4. 编译项目

##三、路由器适配文件说明

1. 路由器适配文件位于`padavan/trunk/configs/boards`目录下，每个文件夹对应一款路由器。注：需手动将路由器适配文件复制到你的项目对应目录下

2. 编辑你的项目trunk目录下的.config，修改路由器型号相关配置
 
 例如：newifi d1的配置

 `CONFIG_PRODUCT=MT7621`
 
 `CONFIG_FIRMWARE_PRODUCT_ID="NEWIFI-D1"`
