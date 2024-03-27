// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/krb5/internal/ktab/KeyTabConstants.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KTAB_KEYTABENTRY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KTAB_KEYTABENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::ktab { class KeyTabEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::ktab::KeyTabEntry>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/ktab/KeyTabEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::krb5::internal::ktab::KeyTabConstants>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KTAB_KEYTABENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KTAB_KEYTABENTRY)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KTAB_KEYTABENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/krb5/EncryptionKey.h>
#include <scapix/java_api/sun/security/krb5/PrincipalName.h>
#include <scapix/java_api/sun/security/krb5/Realm.h>
#include <scapix/java_api/sun/security/krb5/internal/KerberosTime.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::ktab::KeyTabEntry : public jni::object_base<"sun/security/krb5/internal/ktab/KeyTabEntry",
	java::lang::Object,
	sun::security::krb5::internal::ktab::KeyTabConstants>
{
public:

	static jni::ref<sun::security::krb5::internal::ktab::KeyTabEntry> new_object(jni::ref<sun::security::krb5::PrincipalName> p1, jni::ref<sun::security::krb5::Realm> p2, jni::ref<sun::security::krb5::internal::KerberosTime> p3, jint p4, jint p5, jni::ref<jni::array<jbyte>> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	jni::ref<sun::security::krb5::PrincipalName> getService() { return call_method<"getService", jni::ref<sun::security::krb5::PrincipalName>>(); }
	jni::ref<sun::security::krb5::EncryptionKey> getKey() { return call_method<"getKey", jni::ref<sun::security::krb5::EncryptionKey>>(); }
	jni::ref<java::lang::String> getKeyString() { return call_method<"getKeyString", jni::ref<java::lang::String>>(); }
	jint entryLength() { return call_method<"entryLength", jint>(); }
	jni::ref<sun::security::krb5::internal::KerberosTime> getTimeStamp() { return call_method<"getTimeStamp", jni::ref<sun::security::krb5::internal::KerberosTime>>(); }

protected:

	KeyTabEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KTAB_KEYTABENTRY
