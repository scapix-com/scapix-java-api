// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_URLQUERYSANITIZER_VALUESANITIZER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_URLQUERYSANITIZER_VALUESANITIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class UrlQuerySanitizer_ValueSanitizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::UrlQuerySanitizer_ValueSanitizer>
{
	static constexpr fixed_string class_name = "android/net/UrlQuerySanitizer$ValueSanitizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_URLQUERYSANITIZER_VALUESANITIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_URLQUERYSANITIZER_VALUESANITIZER)
#define SCAPIX_JAVA_API_ANDROID_NET_URLQUERYSANITIZER_VALUESANITIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::UrlQuerySanitizer_ValueSanitizer : public jni::object_base<"android/net/UrlQuerySanitizer$ValueSanitizer",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> sanitize(jni::ref<java::lang::String> p1) { return call_method<"sanitize", jni::ref<java::lang::String>>(p1); }

protected:

	UrlQuerySanitizer_ValueSanitizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_URLQUERYSANITIZER_VALUESANITIZER
