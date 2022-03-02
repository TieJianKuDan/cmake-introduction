aux_source_directory(. SRC)
add_executable(main ${SRC})
# libsmath.a 和 smath 都行
# target_link_libraries(main libsmath.a)
# 注意动态库应该存在于程序会进行扫描的目录里，如：
#          --- 程序所在目录
#          --- windows 和 system32
#          --- 环境变量的 path
#          --- 。。。
target_link_libraries(main dmath)