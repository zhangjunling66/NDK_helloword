/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class example_zhangjunling_com_ndk_hellowork_ReferenceJniActivity */

#ifndef _Included_example_zhangjunling_com_ndk_hellowork_ReferenceJniActivity
#define _Included_example_zhangjunling_com_ndk_hellowork_ReferenceJniActivity
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     example_zhangjunling_com_ndk_hellowork_ReferenceJniActivity
 * Method:    getStrings
 * Signature: (ILjava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_example_zhangjunling_com_ndk_1hellowork_ReferenceJniActivity_getStrings
        (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     example_zhangjunling_com_ndk_hellowork_ReferenceJniActivity
 * Method:    initGlobalReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_example_zhangjunling_com_ndk_1hellowork_ReferenceJniActivity_initGlobalReference
        (JNIEnv *, jobject);

/*
 * Class:     example_zhangjunling_com_ndk_hellowork_ReferenceJniActivity
 * Method:    callGlobalReference
 * Signature: ()V
 */
JNIEXPORT jstring JNICALL Java_example_zhangjunling_com_ndk_1hellowork_ReferenceJniActivity_callGlobalReference
        (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif