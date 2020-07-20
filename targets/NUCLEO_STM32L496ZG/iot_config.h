#define CONFIG_ARCH_CPU_TYPE "armv7-m"
#define CONFIG_UARTAT_RCVMAX 10240
#define CONFIG_UARTAT_BAUDRATE 115200
#define CONFIG_UARTAT_DEVNAME "atdev"
#define CONFIG_OTA_APP_ENABLE 1
#define CONFIG_LITEOS_ENABLE 1
#define CONFIG_AT_ENABLE 1
#define CONFIG_AT_DEVNAME "atdev"
#define CONFIG_AT_OOBTABLEN 6
#define CONFIG_AT_RECVMAXLEN 10240
#define CONFIG_AT_TASKPRIOR 10
#define CONFIG_CJSON_ENABLE 1
#define CONFIG_DRIVER_ENABLE 1
#define CONFIG_LINKLOG_ENABLE 1
#define CONFIG_LINKQUEUE_ENABLE 1
#define CONFIG_LINKDEMO_ENABLE 1
#define CONFIG_OTA_ENABLE 1
#define CONFIG_OTA_VERSIONLEN 32
#define CONFIG_OTA_DOWNLOADCHECK_ENABLE 1
#define CONFIG_OTA_SHA256CHECK_ENABLE 1
#define CONFIG_OTA_DOWNLOAD_ENABLE 1
#define CONFIG_OTA_DOWNLOAD_HTTPS 1
#define CONFIG_HTTPS_DOWNLOADING_SHA256CHECK 1
#define CONFIG_HTTPS_DOWNGLOADING_TRYTIMES 24
#define CONFIG_HTTPS_DOWNGLOADING_RWTIMEOUT 10000
#define CONFIG_HTTPS_DOWNGLOADING_BLKLEN 1024
#define CONFIG_TCPIP_AL_ENABLE 1
#define CONFIG_FIBOCOML716_ENABLE 1
#define CONFIG_DTLS_AL_ENABLE 1
#define CONFIG_MBEDTLS_ENABLE 1
#define CONFIG_MBEDTLS_CERT 1
#define CONFIG_MQTT_AL_ENABLE 1
#define CONFIG_PAHO_MQTT 1
#define CONFIG_PAHO_CONNECT_TIMEOUT 10000
#define CONFIG_PAHO_CMD_TIMEOUT 10000
#define CONFIG_PAHO_LOOPTIMEOUT 10
#define CONFIG_PAHO_SNDBUF_SIZE 2048
#define CONFIG_PAHO_RCVBUF_SIZE 2048
#define CONFIG_OCSERVICES_ENABLE 1
#define CONFIG_OCMQTT_ENABLE 1
#define CONFIG_OC_MQTT_V5 1
#define CONFIG_OC_TINYMQTTV5_ENABLE 1
#define CONFIG_OC_MQTTV5_PROFILE 1
#define CONFIG_SHELL_ENABLE 1
#define CONFIG_SHELL_TASK_STACKSIZE 2048
#define CONFIG_SHELL_TASK_PRIOR 10
#define CONFIG_IOT_LINK_CONFIGFILE "iot_config.h"