# 编译配置命令

**配置编译目标为 ESP32S3：**

```bash
idf.py set-target esp32s3
```

**打开 menuconfig：**

```bash
idf.py menuconfig
```

**选择板子：**

```
Xiaozhi Assistant -> Board Type -> xiaozhi All in One 多合一版本
```

**修改分区表：**

```
Partition Table -> Custom partition CSV file -> partitions_16M_FS.csv
```

**编译：**

```bash
idf.py build
```