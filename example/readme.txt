1.��װprotobuf���ִ��:export PKG_CONFIG_PATH=/home/users/yangjun03/LBS-DA-TEST/ToolTest_Dir/protobuf-2.5.0/protobuf_lib/usr/local/lib/pkgconfig
�������ʧ�ܣ��������Ҳ���protobuflib·��
2.��װprotobuf���ִ��:export LD_LIBRARY_PATH=/home/users/yangjun03/LBS-DA-TEST/ToolTest_Dir/protobuf-2.5.0/protobuf_lib/usr/local/lib/
����ִ�п�ִ���ļ�ʧ�ܣ����ӿ��Ҳ���
3.��������:g++ -o protobufWriting protobufWriting.cpp addressbook.pb.cc `pkg-config --cflags --libs protobuf` -lpthread
g++ -o protobufReading protobufReading.cpp addressbook.pb.cc `pkg-config --cflags --libs protobuf` -lpthread