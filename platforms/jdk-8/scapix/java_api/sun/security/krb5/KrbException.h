// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBEXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5 { class KrbException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::KrbException>
{
	static constexpr fixed_string class_name = "sun/security/krb5/KrbException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBEXCEPTION)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/sun/security/krb5/internal/KRBError.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::KrbException : public jni::object_base<"sun/security/krb5/KrbException",
	java::lang::Exception>
{
public:

	static jni::ref<sun::security::krb5::KrbException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::krb5::KrbException> new_object(jni::ref<java::lang::Throwable> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::krb5::KrbException> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::krb5::KrbException> new_object(jint p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::security::krb5::KrbException> new_object(jni::ref<sun::security::krb5::internal::KRBError> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::krb5::KrbException> new_object(jni::ref<sun::security::krb5::internal::KRBError> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<sun::security::krb5::internal::KRBError> getError() { return call_method<"getError", jni::ref<sun::security::krb5::internal::KRBError>>(); }
	jint returnCode() { return call_method<"returnCode", jint>(); }
	jni::ref<java::lang::String> returnCodeSymbol() { return call_method<"returnCodeSymbol", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> returnCodeSymbol(jint p1) { return call_static_method<"returnCodeSymbol", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> returnCodeMessage() { return call_method<"returnCodeMessage", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> errorMessage(jint p1) { return call_static_method<"errorMessage", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> krbErrorMessage() { return call_method<"krbErrorMessage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	KrbException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBEXCEPTION
