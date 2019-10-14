package com.ja3son.es3_effects

import android.graphics.BitmapFactory
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.jin.gpuimage.GPUImage
import com.jin.gpuimage.GPUImageFilter
import com.jin.gpuimage.GPUImageSourceImage
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val bmp = BitmapFactory.decodeStream(assets.open("test.jpg"))
        val sourceImage = GPUImageSourceImage(bmp)
        val filter = GPUImageFilter.create("SobelEdgeDetectionFilter")
        sourceImage.addTarget(filter).addTarget(gpu_image_view)
        GPUImage.getInstance().setSource(sourceImage)
        sourceImage.proceed()
    }
}
