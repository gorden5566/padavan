padavan 中文
=====

简体中文 & 路由器适配

[![GitHub release](https://img.shields.io/github/release/gorden5566/padavan.svg)](https://github.com/gorden5566/padavan/releases)

------

padavan 是一个优秀的路由器固件，支持采用 RT3883/MT7620/MT7621/MT7628 等系列 CPU 的路由器

## 说明

本项目旨在使 padavan 实现更好的中文本地化，以方便更多的用户

项目主要包含两部分：简体中文 dict 文件，部分常见路由器的适配文件

已适配的路由器型号如下：

- 联想 newifi mini (NEWIFI-MINI)

- 联想 newifi2 (NEWIFI-D1)

- 联想 newifi y1s (NEWIFI-Y1S)

- 优酷路由宝 L1 (YK-L1)

- 斐讯 K2 (PSG1218)

------

![image](https://github.com/gorden5566/padavan/raw/master/screenshot/index.png)

## 使用方法

### 使用编译好的固件

提供部分已编译好的固件 (**仅供测试**)，仅针对路由器进行适配并加入简体中文。

可直接下载对应型号固件，通过 uboot 或 breed 刷入（**请务必确保与路由器型号一致**）。

固件下载地址: http://pan.baidu.com/s/1o8jLp9o 密码: 4y9d

### 手动编译固件

若需要更多定制功能，请自己修改源码编译固件。

## 编译步骤

### 环境准备

官方建议使用 ubuntu 16.04 LTS，你也可以使用 debian 衍生的其他 Linux 系统。

安装 git
``` bash
sudo apt-get update
sudo apt-get install git
```

安装依赖
``` bash
sudo apt-get install autoconf automake autopoint bison build-essential flex gawk gettext git gperf libtool pkg-config zlib1g-dev libgmp3-dev libmpc-dev libmpfr-dev texinfo python-docutils
```

### 获取 padavan 固件源码

``` bash
cd /opt
sudo git clone https://bitbucket.org/padavan/rt-n56u
```
如果下载比较慢，也可以从 oschina 镜像下载
``` bash
cd /opt
sudo git clone https://gitee.com/gorden5566/rt-n56u.git
```

### 安装简体中文

下载简体中文源码
``` bash
cd ~/
git clone https://github.com/gorden5566/padavan.git
```

安装
``` bash
cd ~/padavan
sudo sh ./install.sh
```
依次输入 1 和 2 复制文件到项目目录

### 编译交叉编译工具链

交叉编译工具链只需要编译一次即可
``` bash
cd /opt/rt-n56u/toolchain-mipsel
sudo ./clean_sources
sudo ./build_toolchain
```

### 配置修改

#### 方法一： 手动编辑 `/opt/rt-n56u/trunk/.config`

修改路由器型号相关配置(例如 NEWIFI-D1)
```
### Target Vendor/Product (support only Ralink RT3883/MT7620/MT7621/MT7628)
CONFIG_VENDOR=Ralink
CONFIG_PRODUCT=MT7621

### Target ProductID (board select, max 12 symbols)
CONFIG_FIRMWARE_PRODUCT_ID="NEWIFI-D1"
```

修改语言配置
```
CONFIG_FIRMWARE_INCLUDE_LANG_CN=y
```

#### 方法二： 使用编辑好的配置文件

``` bash
cd /opt/rt-n56u/trunk/
sudo cp configs/templates/newifi_d1_full.config .config
```

### 编译固件

执行如下命令编译固件
``` bash
cd /opt/rt-n56u/trunk
sudo ./clear_tree
sudo ./build_firmware
```

## 文件说明

```
├── configs
│   ├── boards
│   │   └── NEWIFI-D1 ---newifi-d1适配文件
│   │       ├── board.h
│   │       ├── board.mk
│   │       ├── kernel-3.4.x.config
│   │       └── libc.config -> ../uclibc-mipsel.config
│   └── templates
│       ├── newifi_d1_base.config ---newifi-d1简版配置
│       └── newifi_d1_full.config ---newifi-d1完整版配置
└── user
    └── www
        ├── dict
        │   └── CN.dict ---简体中文语言文件
        └── Makefile
```

## 贡献列表

详见 [contributors](https://github.com/gorden5566/padavan/graphs/contributors)

<!-- ALL-CONTRIBUTORS-LIST:START - Do not remove or modify this section -->
<!-- prettier-ignore-start -->
<!-- markdownlint-disable -->
<table>
  <tr>
    <td align="center"><a href="https://gorden5566.com/"><img src="https://avatars.githubusercontent.com/u/5310625?v=4?s=100" width="100px;" alt=""/><br /><sub><b>gorden5566</b></sub></a><br /><a href="https://github.com/gorden5566/padavan/commits?author=gorden5566" title="Code">💻</a></td>
    <td align="center"><a href="https://www.dfki.de/en/web/about-us/employee/person/hoxu01/"><img src="https://avatars.githubusercontent.com/u/12478523?v=4?s=100" width="100px;" alt=""/><br /><sub><b>Hongfei Xu</b></sub></a><br /><a href="https://github.com/gorden5566/padavan/commits?author=hfxunlp" title="Code">💻</a></td>
  </tr>
</table>

<!-- markdownlint-restore -->
<!-- prettier-ignore-end -->

<!-- ALL-CONTRIBUTORS-LIST:END -->

## 关注趋势

[![Stargazers over time](https://starchart.cc/gorden5566/padavan.svg)](https://starchart.cc/gorden5566/padavan)
