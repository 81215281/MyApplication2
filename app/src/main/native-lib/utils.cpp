//
// Created by SDT03551 on 2018/10/12.
//
#include "utils.h"
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL

JNICALL Java_com_example_sdt03551_myapplication_MainActivity_stringFromJNI(
            JNIEnv *env, jobject)
{
        std::string ret = "hello 123";
        return env->NewStringUTF(ret.c_str());
}
