#!/bin/bash

# DESTDIR is your target project's dir
DESTDIR=/opt/rt-n56u

ROOTDIR=`pwd`

if [ ! -d "${DESTDIR}" ] ; then
	echo "Target project doesn't exist! Terminate!!!"
	exit 1
fi

copyDict(){
	echo "--------------开始复制语言文件------------------"
	if [ -d "${ROOTDIR}/trunk/user/" ] ; then
		cp -fRv "${ROOTDIR}/trunk/user/" "${DESTDIR}/trunk/"
	fi
	echo "--------------复制语言文件结束------------------"
}

copyRouteConfig(){
	echo "--------------开始复制路由器适配文件------------------"
	if [ -d "${ROOTDIR}/trunk/configs/" ] ; then
		cp -fRv "${ROOTDIR}/trunk/configs/" "${DESTDIR}/trunk/"
	fi
	echo "--------------复制路由器适配文件结束------------------"
}

while :
do
	echo -e "\n"
    echo "请选择你要执行的操作[1|2|3]:"
    echo "-----------------------------"
    echo " [1] 安装汉化文件"
    echo " [2] 安装路由器适配文件"
    echo " [3] 退出"
    echo "-----------------------------"
    read option
    case ${option} in
        1) copyDict
        ;;
        2) copyRouteConfig
        ;;
        3|q|Q|quit|exit)
            break
        ;;
    esac
done
