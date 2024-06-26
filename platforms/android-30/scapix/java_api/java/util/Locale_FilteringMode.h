// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_FILTERINGMODE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_FILTERINGMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Locale_FilteringMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Locale_FilteringMode>
{
	static constexpr fixed_string class_name = "java/util/Locale$FilteringMode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_FILTERINGMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_FILTERINGMODE)
#define SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_FILTERINGMODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Locale_FilteringMode : public jni::object_base<"java/util/Locale$FilteringMode",
	java::lang::Enum>
{
public:

	static jni::ref<java::util::Locale_FilteringMode> AUTOSELECT_FILTERING() { return get_static_field<"AUTOSELECT_FILTERING", jni::ref<java::util::Locale_FilteringMode>>(); }
	static jni::ref<java::util::Locale_FilteringMode> EXTENDED_FILTERING() { return get_static_field<"EXTENDED_FILTERING", jni::ref<java::util::Locale_FilteringMode>>(); }
	static jni::ref<java::util::Locale_FilteringMode> IGNORE_EXTENDED_RANGES() { return get_static_field<"IGNORE_EXTENDED_RANGES", jni::ref<java::util::Locale_FilteringMode>>(); }
	static jni::ref<java::util::Locale_FilteringMode> MAP_EXTENDED_RANGES() { return get_static_field<"MAP_EXTENDED_RANGES", jni::ref<java::util::Locale_FilteringMode>>(); }
	static jni::ref<java::util::Locale_FilteringMode> REJECT_EXTENDED_RANGES() { return get_static_field<"REJECT_EXTENDED_RANGES", jni::ref<java::util::Locale_FilteringMode>>(); }

	static jni::ref<jni::array<java::util::Locale_FilteringMode>> values() { return call_static_method<"values", jni::ref<jni::array<java::util::Locale_FilteringMode>>>(); }
	static jni::ref<java::util::Locale_FilteringMode> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::util::Locale_FilteringMode>>(name); }

protected:

	Locale_FilteringMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_FILTERINGMODE
