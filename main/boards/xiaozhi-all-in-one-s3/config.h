#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

// 该头文件用于配置 xiaozhi-all-in-one-s3 开发板的相关参数

/*
定义音频 I2S 接口相关的 GPIO 引脚
*/
// 音频 I2S 接口的主时钟信号（MCLK）
#define AUDIO_I2S_GPIO_MCLK     GPIO_NUM_6
// 音频 I2S 接口的字选择信号（WS）
#define AUDIO_I2S_GPIO_WS       GPIO_NUM_12
// 音频 I2S 接口的位时钟信号（BCLK）
#define AUDIO_I2S_GPIO_BCLK     GPIO_NUM_14
// 音频 I2S 接口的数据输入信号（DIN）
#define AUDIO_I2S_GPIO_DIN      GPIO_NUM_13
// 音频 I2S 接口的数据输出信号（DOUT）
#define AUDIO_I2S_GPIO_DOUT     GPIO_NUM_11

// 音频编解码器的功率放大器（PA）
#define AUDIO_CODEC_PA_PIN       GPIO_NUM_10
// 音频编解码器 I2C 通信的数据信号线（SDA）
#define AUDIO_CODEC_I2C_SDA_PIN  GPIO_NUM_5
// 音频编解码器 I2C 通信的时钟信号线（SCL）
#define AUDIO_CODEC_I2C_SCL_PIN  GPIO_NUM_4
// 音频编解码器 ES8311 的默认 I2C 地址
#define AUDIO_CODEC_ES8311_ADDR  ES8311_CODEC_DEFAULT_ADDR

/*
音频参数
*/
#define AUDIO_INPUT_SAMPLE_RATE  24000
// 音频输入的采样率设置为 24000Hz
#define AUDIO_OUTPUT_SAMPLE_RATE 24000
// 音频输出的采样率设置为 24000Hz

/*
定义显示 SPI 接口相关的 GPIO 引脚
 */
// 显示 SPI 接口的时钟信号（SCLK）
#define DISPLAY_SPI_SCLK_PIN    GPIO_NUM_16
// 显示 SPI 接口的主输出从输入信号（MOSI）
#define DISPLAY_SPI_MOSI_PIN    GPIO_NUM_17
// 显示 SPI 接口的片选信号（CS）
#define DISPLAY_SPI_CS_PIN      GPIO_NUM_15
// 显示 SPI 接口的数据/命令选择信号（DC）
#define DISPLAY_SPI_DC_PIN      GPIO_NUM_21
// 显示 SPI 接口的复位信号（RESET）
#define DISPLAY_SPI_RESET_PIN   GPIO_NUM_18
// 显示 SPI 接口的时钟频率设置为 40MHz
#define DISPLAY_SPI_SCLK_HZ     (40 * 1000 * 1000)

// 显示屏背光灯控制引脚使用的 GPIO 
#define DISPLAY_BACKLIGHT_PIN GPIO_NUM_42
// 显示屏背光灯输出是否反转
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT true

/*
显示参数
*/
// 显示屏的宽度为 172 像素
#define DISPLAY_WIDTH   172
// 显示屏的高度为 320 像素
#define DISPLAY_HEIGHT  320
// 是否交换 X 和 Y 坐标，这里设置为交换
#define DISPLAY_SWAP_XY false
// 是否在 Y 轴上镜像显示，这里设置为镜像
#define DISPLAY_MIRROR_Y false
// 是否在 X 轴上镜像显示，这里设置为不镜像
#define DISPLAY_MIRROR_X false
// 显示屏在 X 轴上的偏移量为 0
#define DISPLAY_OFFSET_X  34
// 显示屏在 Y 轴上的偏移量为 0
#define DISPLAY_OFFSET_Y  0

/**
 * 外设IO配置
 */
// 开发板上内置 LED 灯使用的 GPIO 
#define BUILTIN_LED_GPIO        GPIO_NUM_9
// 开发板上的启动按钮使用的 GPIO 
#define BOOT_BUTTON_GPIO        GPIO_NUM_0

#endif // _BOARD_CONFIG_H_
