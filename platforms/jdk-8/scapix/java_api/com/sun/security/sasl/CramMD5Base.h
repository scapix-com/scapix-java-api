// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_CRAMMD5BASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_CRAMMD5BASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::security::sasl { class CramMD5Base; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::security::sasl::CramMD5Base>
{
	static constexpr fixed_string class_name = "com/sun/security/sasl/CramMD5Base";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_CRAMMD5BASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_CRAMMD5BASE)
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_CRAMMD5BASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::security::sasl::CramMD5Base : public jni::object_base<"com/sun/security/sasl/CramMD5Base",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getMechanismName() { return call_method<"getMechanismName", jni::ref<java::lang::String>>(); }
	jboolean isComplete() { return call_method<"isComplete", jboolean>(); }
	jni::ref<jni::array<jbyte>> unwrap(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"unwrap", jni::ref<jni::array<jbyte>>>(p1, p2, p3); }
	jni::ref<jni::array<jbyte>> wrap(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"wrap", jni::ref<jni::array<jbyte>>>(p1, p2, p3); }
	jni::ref<java::lang::Object> getNegotiatedProperty(jni::ref<java::lang::String> p1) { return call_method<"getNegotiatedProperty", jni::ref<java::lang::Object>>(p1); }
	void dispose() { return call_method<"dispose", void>(); }

protected:

	CramMD5Base(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_CRAMMD5BASE
