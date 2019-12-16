package com.ja3son.bullet

class BulletJNI {
    private object SingletonHolder {
        internal val INSTANCE: BulletJNI = BulletJNI()
    }

    companion object {
        init {
            System.loadLibrary("c_bullet")
        }

        fun getInstance(): BulletJNI {
            return SingletonHolder.INSTANCE
        }
    }

    external fun init()
}