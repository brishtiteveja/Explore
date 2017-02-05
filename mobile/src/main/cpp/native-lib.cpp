#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_explore_explore_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "My first android app";
    return env->NewStringUTF(hello.c_str());
}
