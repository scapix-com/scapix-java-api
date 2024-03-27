// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPCODER_COMPARISON_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPCODER_COMPARISON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::zip { class ZipCoder_Comparison; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::zip::ZipCoder_Comparison>
{
	static constexpr fixed_string class_name = "java/util/zip/ZipCoder$Comparison";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPCODER_COMPARISON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPCODER_COMPARISON)
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPCODER_COMPARISON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::zip::ZipCoder_Comparison : public jni::object_base<"java/util/zip/ZipCoder$Comparison",
	java::lang::Enum>
{
public:

	static jni::ref<java::util::zip::ZipCoder_Comparison> EXACT_MATCH() { return get_static_field<"EXACT_MATCH", jni::ref<java::util::zip::ZipCoder_Comparison>>(); }
	static jni::ref<java::util::zip::ZipCoder_Comparison> DIRECTORY_MATCH() { return get_static_field<"DIRECTORY_MATCH", jni::ref<java::util::zip::ZipCoder_Comparison>>(); }
	static jni::ref<java::util::zip::ZipCoder_Comparison> NO_MATCH() { return get_static_field<"NO_MATCH", jni::ref<java::util::zip::ZipCoder_Comparison>>(); }

	static jni::ref<jni::array<java::util::zip::ZipCoder_Comparison>> values() { return call_static_method<"values", jni::ref<jni::array<java::util::zip::ZipCoder_Comparison>>>(); }
	static jni::ref<java::util::zip::ZipCoder_Comparison> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::util::zip::ZipCoder_Comparison>>(name); }

protected:

	ZipCoder_Comparison(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPCODER_COMPARISON