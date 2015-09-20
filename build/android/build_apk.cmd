
call android update project -p ./ --target android-22

call %ndk_root%\ndk-build

call ant debug

adb uninstall com.example.native_activity

adb install bin\NativeActivity-debug.apk
