// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_BUILD_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_BUILD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class Build; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::Build>
{
	static constexpr fixed_string class_name = "android/os/Build";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_BUILD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_BUILD)
#define SCAPIX_JAVA_API_ANDROID_OS_BUILD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/os/Build_VERSION_CODES.h>
#include <scapix/java_api/android/os/Build_VERSION.h>
#include <scapix/java_api/android/os/Build_Partition.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::Build : public jni::object_base<"android/os/Build",
	java::lang::Object>
{
public:

	using VERSION_CODES = Build_VERSION_CODES;
	using VERSION = Build_VERSION;
	using Partition = Build_Partition;

	static jni::ref<java::lang::String> BOARD() { return get_static_field<"BOARD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BOOTLOADER() { return get_static_field<"BOOTLOADER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BRAND() { return get_static_field<"BRAND", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CPU_ABI() { return get_static_field<"CPU_ABI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CPU_ABI2() { return get_static_field<"CPU_ABI2", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEVICE() { return get_static_field<"DEVICE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISPLAY() { return get_static_field<"DISPLAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FINGERPRINT() { return get_static_field<"FINGERPRINT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HARDWARE() { return get_static_field<"HARDWARE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HOST() { return get_static_field<"HOST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ID() { return get_static_field<"ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MANUFACTURER() { return get_static_field<"MANUFACTURER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MODEL() { return get_static_field<"MODEL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ODM_SKU() { return get_static_field<"ODM_SKU", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PRODUCT() { return get_static_field<"PRODUCT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RADIO() { return get_static_field<"RADIO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERIAL() { return get_static_field<"SERIAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SKU() { return get_static_field<"SKU", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SOC_MANUFACTURER() { return get_static_field<"SOC_MANUFACTURER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SOC_MODEL() { return get_static_field<"SOC_MODEL", jni::ref<java::lang::String>>(); }
	static jni::ref<jni::array<java::lang::String>> SUPPORTED_32_BIT_ABIS() { return get_static_field<"SUPPORTED_32_BIT_ABIS", jni::ref<jni::array<java::lang::String>>>(); }
	static jni::ref<jni::array<java::lang::String>> SUPPORTED_64_BIT_ABIS() { return get_static_field<"SUPPORTED_64_BIT_ABIS", jni::ref<jni::array<java::lang::String>>>(); }
	static jni::ref<jni::array<java::lang::String>> SUPPORTED_ABIS() { return get_static_field<"SUPPORTED_ABIS", jni::ref<jni::array<java::lang::String>>>(); }
	static jni::ref<java::lang::String> TAGS() { return get_static_field<"TAGS", jni::ref<java::lang::String>>(); }
	static jlong TIME() { return get_static_field<"TIME", jlong>(); }
	static jni::ref<java::lang::String> TYPE() { return get_static_field<"TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> UNKNOWN() { return get_static_field<"UNKNOWN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USER() { return get_static_field<"USER", jni::ref<java::lang::String>>(); }

	static jni::ref<android::os::Build> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> getSerial() { return call_static_method<"getSerial", jni::ref<java::lang::String>>(); }
	static jni::ref<java::util::List> getFingerprintedPartitions() { return call_static_method<"getFingerprintedPartitions", jni::ref<java::util::List>>(); }
	static jni::ref<java::lang::String> getRadioVersion() { return call_static_method<"getRadioVersion", jni::ref<java::lang::String>>(); }

protected:

	Build(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_BUILD
