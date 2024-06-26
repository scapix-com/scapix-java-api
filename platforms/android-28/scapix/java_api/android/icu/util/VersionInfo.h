// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_UTIL_VERSIONINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_VERSIONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::util { class VersionInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::util::VersionInfo>
{
	static constexpr fixed_string class_name = "android/icu/util/VersionInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_VERSIONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_UTIL_VERSIONINFO)
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_VERSIONINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::util::VersionInfo : public jni::object_base<"android/icu/util/VersionInfo",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	static jni::ref<android::icu::util::VersionInfo> ICU_VERSION() { return get_static_field<"ICU_VERSION", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UCOL_BUILDER_VERSION() { return get_static_field<"UCOL_BUILDER_VERSION", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UCOL_RUNTIME_VERSION() { return get_static_field<"UCOL_RUNTIME_VERSION", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_10_0() { return get_static_field<"UNICODE_10_0", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_1_0() { return get_static_field<"UNICODE_1_0", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_1_0_1() { return get_static_field<"UNICODE_1_0_1", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_1_1_0() { return get_static_field<"UNICODE_1_1_0", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_1_1_5() { return get_static_field<"UNICODE_1_1_5", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_2_0() { return get_static_field<"UNICODE_2_0", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_2_1_2() { return get_static_field<"UNICODE_2_1_2", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_2_1_5() { return get_static_field<"UNICODE_2_1_5", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_2_1_8() { return get_static_field<"UNICODE_2_1_8", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_2_1_9() { return get_static_field<"UNICODE_2_1_9", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_3_0() { return get_static_field<"UNICODE_3_0", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_3_0_1() { return get_static_field<"UNICODE_3_0_1", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_3_1_0() { return get_static_field<"UNICODE_3_1_0", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_3_1_1() { return get_static_field<"UNICODE_3_1_1", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_3_2() { return get_static_field<"UNICODE_3_2", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_4_0() { return get_static_field<"UNICODE_4_0", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_4_0_1() { return get_static_field<"UNICODE_4_0_1", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_4_1() { return get_static_field<"UNICODE_4_1", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_5_0() { return get_static_field<"UNICODE_5_0", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_5_1() { return get_static_field<"UNICODE_5_1", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_5_2() { return get_static_field<"UNICODE_5_2", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_6_0() { return get_static_field<"UNICODE_6_0", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_6_1() { return get_static_field<"UNICODE_6_1", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_6_2() { return get_static_field<"UNICODE_6_2", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_6_3() { return get_static_field<"UNICODE_6_3", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_7_0() { return get_static_field<"UNICODE_7_0", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_8_0() { return get_static_field<"UNICODE_8_0", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<android::icu::util::VersionInfo> UNICODE_9_0() { return get_static_field<"UNICODE_9_0", jni::ref<android::icu::util::VersionInfo>>(); }

	static jni::ref<android::icu::util::VersionInfo> getInstance(jni::ref<java::lang::String> version) { return call_static_method<"getInstance", jni::ref<android::icu::util::VersionInfo>>(version); }
	static jni::ref<android::icu::util::VersionInfo> getInstance(jint major, jint minor, jint milli, jint micro) { return call_static_method<"getInstance", jni::ref<android::icu::util::VersionInfo>>(major, minor, milli, micro); }
	static jni::ref<android::icu::util::VersionInfo> getInstance(jint major, jint minor, jint milli) { return call_static_method<"getInstance", jni::ref<android::icu::util::VersionInfo>>(major, minor, milli); }
	static jni::ref<android::icu::util::VersionInfo> getInstance(jint major, jint minor) { return call_static_method<"getInstance", jni::ref<android::icu::util::VersionInfo>>(major, minor); }
	static jni::ref<android::icu::util::VersionInfo> getInstance(jint major) { return call_static_method<"getInstance", jni::ref<android::icu::util::VersionInfo>>(major); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint getMajor() { return call_method<"getMajor", jint>(); }
	jint getMinor() { return call_method<"getMinor", jint>(); }
	jint getMilli() { return call_method<"getMilli", jint>(); }
	jint getMicro() { return call_method<"getMicro", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint compareTo(jni::ref<android::icu::util::VersionInfo> other) { return call_method<"compareTo", jint>(other); }

protected:

	VersionInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_VERSIONINFO
