#include <esp_log.h>
#include <esp_err.h>
#include <nvs.h>
#include <nvs_flash.h>
#include <driver/gpio.h>
#include <esp_event.h>
#include "esp_spiffs.h"

#include "application.h"
#include "system_info.h"

#define TAG "main"

extern "C" void app_main(void)
{
    // Initialize the default event loop
    ESP_ERROR_CHECK(esp_event_loop_create_default());

    // Initialize NVS flash for WiFi configuration
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_LOGW(TAG, "Erasing NVS flash to fix corruption");
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);

    // 初始化 SPIFFS
    ESP_LOGI(TAG, "Initializing SPIFFS");
    // 配置 SPIFFS 文件系统
    esp_vfs_spiffs_conf_t conf = {
            .base_path = "/spiffs",            // 文件系统的挂载路径
            .partition_label = NULL,           // 使用默认的 SPIFFS 分区标签
            .max_files = 5,                    // 最大同时打开的文件数
            .format_if_mount_failed = true     // 如果挂载失败，则格式化文件系统
    };
    // 使用上述配置初始化并挂载 SPIFFS 文件系统
    ret = esp_vfs_spiffs_register(&conf);

    // Launch the application
    Application::GetInstance().Start();
    // The main thread will exit and release the stack memory
}
