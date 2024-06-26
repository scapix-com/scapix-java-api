// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODINGERRORACTION_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODINGERRORACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::charset { class CodingErrorAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::charset::CodingErrorAction>
{
	static constexpr fixed_string class_name = "java/nio/charset/CodingErrorAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODINGERRORACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODINGERRORACTION)
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODINGERRORACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::charset::CodingErrorAction : public jni::object_base<"java/nio/charset/CodingErrorAction",
	java::lang::Object>
{
public:

	static jni::ref<java::nio::charset::CodingErrorAction> IGNORE() { return get_static_field<"IGNORE", jni::ref<java::nio::charset::CodingErrorAction>>(); }
	static jni::ref<java::nio::charset::CodingErrorAction> REPLACE() { return get_static_field<"REPLACE", jni::ref<java::nio::charset::CodingErrorAction>>(); }
	static jni::ref<java::nio::charset::CodingErrorAction> REPORT() { return get_static_field<"REPORT", jni::ref<java::nio::charset::CodingErrorAction>>(); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CodingErrorAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODINGERRORACTION
