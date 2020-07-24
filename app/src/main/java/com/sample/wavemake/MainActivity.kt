package com.sample.wavemake

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.MotionEvent
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        startEngine()
    }

    override fun onTouchEvent(event: MotionEvent?): Boolean {
        touchEvent(event!!.action)
        return super.onTouchEvent(event)
    }

    override fun onDestroy() {
        super.onDestroy()
        stopEngine()
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    external fun touchEvent(action: Int)

    external fun startEngine()

    external fun stopEngine()


    companion object {
        // Used to load the 'native-lib' library on application startup.
        init {
            System.loadLibrary("native-lib")
        }
    }
}
