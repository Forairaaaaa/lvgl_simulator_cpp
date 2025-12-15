# Lvgl Cpp 模拟器

## 工具链：

- **macOS:**  `brew install sdl2 cmake make`  
- **Ubuntu:**  `sudo apt install build-essential cmake libsdl2-dev`  

## 拉取依赖：

```bash
python3 ./fetch_repos.py
```

## 编译：

```bash
mkdir build && cd build
```

```bash
cmake .. && make -j20
```
