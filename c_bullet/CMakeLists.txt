CMAKE_MINIMUM_REQUIRED(VERSION 3.4.1)

SET(BULLET_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/main/cpp/bullet)

INCLUDE_DIRECTORIES(${BULLET_INCLUDE_DIR})

SUBDIRS(${BULLET_INCLUDE_DIR})

ADD_LIBRARY(c_bullet SHARED src/main/cpp/jni/bullet_JNI.cpp)

FIND_LIBRARY(log-lib log)

TARGET_LINK_LIBRARIES(c_bullet
        ${log-lib}
        BulletInverseDynamics
        BulletSoftBody
        BulletCollision
        BulletDynamics
        LinearMath
        Bullet3Common
        GLESv3)