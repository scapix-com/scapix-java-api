// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_UTIL_MEASUREUNIT_MEASUREPREFIX_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_MEASUREUNIT_MEASUREPREFIX_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::util { class MeasureUnit_MeasurePrefix; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::util::MeasureUnit_MeasurePrefix>
{
	static constexpr fixed_string class_name = "android/icu/util/MeasureUnit$MeasurePrefix";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_MEASUREUNIT_MEASUREPREFIX_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_UTIL_MEASUREUNIT_MEASUREPREFIX)
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_MEASUREUNIT_MEASUREPREFIX

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::util::MeasureUnit_MeasurePrefix : public jni::object_base<"android/icu/util/MeasureUnit$MeasurePrefix",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> YOTTA() { return get_static_field<"YOTTA", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> ZETTA() { return get_static_field<"ZETTA", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> EXA() { return get_static_field<"EXA", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> PETA() { return get_static_field<"PETA", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> TERA() { return get_static_field<"TERA", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> GIGA() { return get_static_field<"GIGA", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> MEGA() { return get_static_field<"MEGA", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> KILO() { return get_static_field<"KILO", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> HECTO() { return get_static_field<"HECTO", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> DEKA() { return get_static_field<"DEKA", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> ONE() { return get_static_field<"ONE", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> DECI() { return get_static_field<"DECI", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> CENTI() { return get_static_field<"CENTI", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> MILLI() { return get_static_field<"MILLI", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> MICRO() { return get_static_field<"MICRO", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> NANO() { return get_static_field<"NANO", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> PICO() { return get_static_field<"PICO", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> FEMTO() { return get_static_field<"FEMTO", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> ATTO() { return get_static_field<"ATTO", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> ZEPTO() { return get_static_field<"ZEPTO", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> YOCTO() { return get_static_field<"YOCTO", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> KIBI() { return get_static_field<"KIBI", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> MEBI() { return get_static_field<"MEBI", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> GIBI() { return get_static_field<"GIBI", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> TEBI() { return get_static_field<"TEBI", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> PEBI() { return get_static_field<"PEBI", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> EXBI() { return get_static_field<"EXBI", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> ZEBI() { return get_static_field<"ZEBI", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> YOBI() { return get_static_field<"YOBI", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(); }

	static jni::ref<jni::array<android::icu::util::MeasureUnit_MeasurePrefix>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::util::MeasureUnit_MeasurePrefix>>>(); }
	static jni::ref<android::icu::util::MeasureUnit_MeasurePrefix> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::util::MeasureUnit_MeasurePrefix>>(name); }
	jint getBase() { return call_method<"getBase", jint>(); }
	jint getPower() { return call_method<"getPower", jint>(); }

protected:

	MeasureUnit_MeasurePrefix(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_MEASUREUNIT_MEASUREPREFIX
