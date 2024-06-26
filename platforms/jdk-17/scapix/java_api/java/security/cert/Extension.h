// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CERT_EXTENSION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_EXTENSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::cert { class Extension; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::cert::Extension>
{
	static constexpr fixed_string class_name = "java/security/cert/Extension";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_EXTENSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CERT_EXTENSION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_EXTENSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::cert::Extension : public jni::object_base<"java/security/cert/Extension",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jboolean isCritical() { return call_method<"isCritical", jboolean>(); }
	jni::ref<jni::array<jbyte>> getValue() { return call_method<"getValue", jni::ref<jni::array<jbyte>>>(); }
	void encode(jni::ref<java::io::OutputStream> p1) { return call_method<"encode", void>(p1); }

protected:

	Extension(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_EXTENSION
