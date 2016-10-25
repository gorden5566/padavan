/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef _defaults_h_
#define _defaults_h_

#define SYS_SHELL		"/bin/sh"
#define SYS_EXEC_PATH		"/usr/sbin:/usr/bin:/sbin:/bin"
#define SYS_EXEC_PATH_OPT	"/opt/sbin:/opt/bin:/usr/sbin:/usr/bin:/sbin:/bin"
#define SYS_HOME_PATH_ROOT	"/home/admin"

#define SYS_USER_ROOT		"admin"
#define SYS_GROUP_ROOT		"root"
#define SYS_USER_NOBODY		"nobody"
#define SYS_GROUP_NOGROUP	"nogroup"

#define DEF_LAN_ADDR		"192.168.1.1"
#define DEF_LAN_DHCP_BEG	"192.168.1.2"
#define DEF_LAN_DHCP_END	"192.168.1.244"
#define DEF_LAN_MASK		"255.255.255.0"

#define DEF_WLAN_2G_CC		"GB"
#define DEF_WLAN_5G_CC		"GB"
#define DEF_WLAN_2G_SSID	"ASUS"
#define DEF_WLAN_5G_SSID	"ASUS_5G"
#define DEF_WLAN_2G_GSSID	"ASUS_GUEST"
#define DEF_WLAN_5G_GSSID	"ASUS_GUEST_5G"
#define DEF_WLAN_2G_PSK		"1234567890"
#define DEF_WLAN_5G_PSK		"1234567890"

#define DEF_ROOT_PASSWORD	"admin"
#define DEF_SMB_WORKGROUP	"WORKGROUP"
#define DEF_TIMEZONE		"GMT0"
#define DEF_NTP_SERVER0		"pool.ntp.org"
#define DEF_NTP_SERVER1		"time.nist.gov"
#define DEF_HTTPS_CIPH_LIST	"DH+AESGCM:DH+AES256:DH+AES:DH+3DES:RSA+AES:RSA+3DES:!ADH:!MD5:!DSS"

#endif
