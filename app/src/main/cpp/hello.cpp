#include <jni.h>
#include <string>
#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/dnn.h>
#include <dlib/gui_widgets.h>
#include <dlib/clustering.h>
#include <dlib/string.h>
#include <dlib/image_io.h>
using namespace dlib;
using namespace std;
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_testcplosplos_MainActivity_getNativeString(JNIEnv *env, jobject instance) {


    std::string hello = "Hello from C++";

    return env->NewStringUTF(hello.c_str());

}