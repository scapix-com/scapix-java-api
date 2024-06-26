// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_CONFOUNDER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_CONFOUNDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5 { class Confounder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::Confounder>
{
	static constexpr fixed_string class_name = "sun/security/krb5/Confounder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_CONFOUNDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_CONFOUNDER)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_CONFOUNDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::Confounder : public jni::object_base<"sun/security/krb5/Confounder",
	java::lang::Object>
{
public:

	static jni::ref<jni::array<jbyte>> bytes(jint p1) { return call_static_method<"bytes", jni::ref<jni::array<jbyte>>>(p1); }
	static jint intValue() { return call_static_method<"intValue", jint>(); }
	static jlong longValue() { return call_static_method<"longValue", jlong>(); }

protected:

	Confounder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_CONFOUNDER
