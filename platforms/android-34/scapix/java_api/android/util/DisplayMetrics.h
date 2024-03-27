// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_DISPLAYMETRICS_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_DISPLAYMETRICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class DisplayMetrics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::DisplayMetrics>
{
	static constexpr fixed_string class_name = "android/util/DisplayMetrics";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_DISPLAYMETRICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_DISPLAYMETRICS)
#define SCAPIX_JAVA_API_ANDROID_UTIL_DISPLAYMETRICS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::DisplayMetrics : public jni::object_base<"android/util/DisplayMetrics",
	java::lang::Object>
{
public:

	static jint DENSITY_140() { return get_static_field<"DENSITY_140", jint>(); }
	static jint DENSITY_180() { return get_static_field<"DENSITY_180", jint>(); }
	static jint DENSITY_200() { return get_static_field<"DENSITY_200", jint>(); }
	static jint DENSITY_220() { return get_static_field<"DENSITY_220", jint>(); }
	static jint DENSITY_260() { return get_static_field<"DENSITY_260", jint>(); }
	static jint DENSITY_280() { return get_static_field<"DENSITY_280", jint>(); }
	static jint DENSITY_300() { return get_static_field<"DENSITY_300", jint>(); }
	static jint DENSITY_340() { return get_static_field<"DENSITY_340", jint>(); }
	static jint DENSITY_360() { return get_static_field<"DENSITY_360", jint>(); }
	static jint DENSITY_400() { return get_static_field<"DENSITY_400", jint>(); }
	static jint DENSITY_420() { return get_static_field<"DENSITY_420", jint>(); }
	static jint DENSITY_440() { return get_static_field<"DENSITY_440", jint>(); }
	static jint DENSITY_450() { return get_static_field<"DENSITY_450", jint>(); }
	static jint DENSITY_520() { return get_static_field<"DENSITY_520", jint>(); }
	static jint DENSITY_560() { return get_static_field<"DENSITY_560", jint>(); }
	static jint DENSITY_600() { return get_static_field<"DENSITY_600", jint>(); }
	static jint DENSITY_DEFAULT() { return get_static_field<"DENSITY_DEFAULT", jint>(); }
	static jint DENSITY_DEVICE_STABLE() { return get_static_field<"DENSITY_DEVICE_STABLE", jint>(); }
	static jint DENSITY_HIGH() { return get_static_field<"DENSITY_HIGH", jint>(); }
	static jint DENSITY_LOW() { return get_static_field<"DENSITY_LOW", jint>(); }
	static jint DENSITY_MEDIUM() { return get_static_field<"DENSITY_MEDIUM", jint>(); }
	static jint DENSITY_TV() { return get_static_field<"DENSITY_TV", jint>(); }
	static jint DENSITY_XHIGH() { return get_static_field<"DENSITY_XHIGH", jint>(); }
	static jint DENSITY_XXHIGH() { return get_static_field<"DENSITY_XXHIGH", jint>(); }
	static jint DENSITY_XXXHIGH() { return get_static_field<"DENSITY_XXXHIGH", jint>(); }
	jfloat density() { return get_field<"density", jfloat>(); }
	void density(jfloat v) { set_field<"density", jfloat>(v); }
	jint densityDpi() { return get_field<"densityDpi", jint>(); }
	void densityDpi(jint v) { set_field<"densityDpi", jint>(v); }
	jint heightPixels() { return get_field<"heightPixels", jint>(); }
	void heightPixels(jint v) { set_field<"heightPixels", jint>(v); }
	jfloat scaledDensity() { return get_field<"scaledDensity", jfloat>(); }
	void scaledDensity(jfloat v) { set_field<"scaledDensity", jfloat>(v); }
	jint widthPixels() { return get_field<"widthPixels", jint>(); }
	void widthPixels(jint v) { set_field<"widthPixels", jint>(v); }
	jfloat xdpi() { return get_field<"xdpi", jfloat>(); }
	void xdpi(jfloat v) { set_field<"xdpi", jfloat>(v); }
	jfloat ydpi() { return get_field<"ydpi", jfloat>(); }
	void ydpi(jfloat v) { set_field<"ydpi", jfloat>(v); }

	static jni::ref<android::util::DisplayMetrics> new_object() { return base_::new_object(); }
	void setTo(jni::ref<android::util::DisplayMetrics> o) { return call_method<"setTo", void>(o); }
	void setToDefaults() { return call_method<"setToDefaults", void>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jboolean equals(jni::ref<android::util::DisplayMetrics> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	DisplayMetrics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_DISPLAYMETRICS
