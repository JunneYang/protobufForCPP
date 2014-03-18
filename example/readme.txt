1.安装protobuf完毕执行:export PKG_CONFIG_PATH=/home/users/yangjun03/LBS-DA-TEST/ToolTest_Dir/protobuf-2.5.0/protobuf_lib/usr/local/lib/pkgconfig
否则编译失败，编译器找不到protobuflib路径
2.安装protobuf完毕执行:export LD_LIBRARY_PATH=/home/users/yangjun03/LBS-DA-TEST/ToolTest_Dir/protobuf-2.5.0/protobuf_lib/usr/local/lib/
否则执行可执行文件失败，链接库找不到
3.编译命令:g++ -o protobufWriting protobufWriting.cpp addressbook.pb.cc `pkg-config --cflags --libs protobuf` -lpthread
g++ -o protobufReading protobufReading.cpp addressbook.pb.cc `pkg-config --cflags --libs protobuf` -lpthread