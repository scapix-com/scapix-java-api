// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_PARSEEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_PARSEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class ParseException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::ParseException>
{
	static constexpr fixed_string class_name = "android/net/ParseException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_PARSEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_PARSEEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_NET_PARSEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::ParseException : public jni::object_base<"android/net/ParseException",
	java::lang::RuntimeException>
{
public:

	jni::ref<java::lang::String> response() { return get_field<"response", jni::ref<java::lang::String>>(); }
	void response(jni::ref<java::lang::String> v) { set_field<"response", jni::ref<java::lang::String>>(v); }


protected:

	ParseException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_PARSEEXCEPTION
