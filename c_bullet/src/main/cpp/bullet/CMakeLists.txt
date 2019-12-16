CMAKE_MINIMUM_REQUIRED(VERSION 3.4.1)

SET(BULLET_VERSION 2.89)

SET(BULLET_PHYSICS_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/)

IF (BUILD_BULLET3)
    SUBDIRS(Bullet3OpenCL Bullet3Serialize/Bullet2FileLoader Bullet3Dynamics Bullet3Collision Bullet3Geometry)
ENDIF (BUILD_BULLET3)

SUBDIRS(BulletInverseDynamics BulletSoftBody BulletCollision BulletDynamics LinearMath Bullet3Common)