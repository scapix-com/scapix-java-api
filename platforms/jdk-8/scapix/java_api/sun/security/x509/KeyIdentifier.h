// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_KEYIDENTIFIER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_KEYIDENTIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class KeyIdentifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::KeyIdentifier>
{
	static constexpr fixed_string class_name = "sun/security/x509/KeyIdentifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_KEYIDENTIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_KEYIDENTIFIER)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_KEYIDENTIFIER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/PublicKey.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::KeyIdentifier : public jni::object_base<"sun/security/x509/KeyIdentifier",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::x509::KeyIdentifier> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::KeyIdentifier> new_object(jni::ref<sun::security::util::DerValue> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::KeyIdentifier> new_object(jni::ref<java::security::PublicKey> p1) { return base_::new_object(p1); }
	jni::ref<jni::array<jbyte>> getIdentifier() { return call_method<"getIdentifier", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	KeyIdentifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_KEYIDENTIFIER
