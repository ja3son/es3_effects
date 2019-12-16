//
// Created by ja3son on 2019-12-16.
//

#ifndef ES3_EFFECTS_BULLET_JNI_H
#define ES3_EFFECTS_BULLET_JNI_H

#include <string.h>
#include <jni.h>
#include <android/log.h>

#include <stdio.h>
#include <math.h>

#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, "ja333son", __VA_ARGS__))

extern "C" {

JNIEXPORT void JNICALL Java_com_ja3son_bullet_BulletJNI_init
        (JNIEnv *env, jclass obj);

};

#endif //ES3_EFFECTS_BULLET_JNI_H
