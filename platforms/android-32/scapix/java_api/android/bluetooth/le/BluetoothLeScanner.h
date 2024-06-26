// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_BLUETOOTHLESCANNER_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_BLUETOOTHLESCANNER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth::le { class BluetoothLeScanner; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::le::BluetoothLeScanner>
{
	static constexpr fixed_string class_name = "android/bluetooth/le/BluetoothLeScanner";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_BLUETOOTHLESCANNER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_BLUETOOTHLESCANNER)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_BLUETOOTHLESCANNER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/bluetooth/le/ScanCallback.h>
#include <scapix/java_api/android/bluetooth/le/ScanSettings.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::le::BluetoothLeScanner : public jni::object_base<"android/bluetooth/le/BluetoothLeScanner",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> EXTRA_CALLBACK_TYPE() { return get_static_field<"EXTRA_CALLBACK_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_ERROR_CODE() { return get_static_field<"EXTRA_ERROR_CODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_LIST_SCAN_RESULT() { return get_static_field<"EXTRA_LIST_SCAN_RESULT", jni::ref<java::lang::String>>(); }

	void startScan(jni::ref<android::bluetooth::le::ScanCallback> callback) { return call_method<"startScan", void>(callback); }
	void startScan(jni::ref<java::util::List> filters, jni::ref<android::bluetooth::le::ScanSettings> settings, jni::ref<android::bluetooth::le::ScanCallback> callback) { return call_method<"startScan", void>(filters, settings, callback); }
	jint startScan(jni::ref<java::util::List> filters, jni::ref<android::bluetooth::le::ScanSettings> settings, jni::ref<android::app::PendingIntent> callbackIntent) { return call_method<"startScan", jint>(filters, settings, callbackIntent); }
	void stopScan(jni::ref<android::bluetooth::le::ScanCallback> callback) { return call_method<"stopScan", void>(callback); }
	void stopScan(jni::ref<android::app::PendingIntent> callbackIntent) { return call_method<"stopScan", void>(callbackIntent); }
	void flushPendingScanResults(jni::ref<android::bluetooth::le::ScanCallback> callback) { return call_method<"flushPendingScanResults", void>(callback); }

protected:

	BluetoothLeScanner(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_BLUETOOTHLESCANNER
