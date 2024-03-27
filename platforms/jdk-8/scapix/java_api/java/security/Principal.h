// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_PRINCIPAL_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_PRINCIPAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class Principal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::Principal>
{
	static constexpr fixed_string class_name = "java/security/Principal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PRINCIPAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_PRINCIPAL)
#define SCAPIX_JAVA_API_JAVA_SECURITY_PRINCIPAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/security/auth/Subject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::Principal : public jni::object_base<"java/security/Principal",
	java::lang::Object>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jboolean implies(jni::ref<javax::security::auth::Subject> p1) { return call_method<"implies", jboolean>(p1); }

protected:

	Principal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PRINCIPAL
