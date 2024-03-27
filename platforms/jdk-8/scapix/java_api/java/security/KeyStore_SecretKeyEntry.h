// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/KeyStore_Entry.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_SECRETKEYENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_SECRETKEYENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class KeyStore_SecretKeyEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::KeyStore_SecretKeyEntry>
{
	static constexpr fixed_string class_name = "java/security/KeyStore$SecretKeyEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::KeyStore_Entry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_SECRETKEYENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_SECRETKEYENTRY)
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_SECRETKEYENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/javax/crypto/SecretKey.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::KeyStore_SecretKeyEntry : public jni::object_base<"java/security/KeyStore$SecretKeyEntry",
	java::lang::Object,
	java::security::KeyStore_Entry>
{
public:

	static jni::ref<java::security::KeyStore_SecretKeyEntry> new_object(jni::ref<javax::crypto::SecretKey> p1) { return base_::new_object(p1); }
	static jni::ref<java::security::KeyStore_SecretKeyEntry> new_object(jni::ref<javax::crypto::SecretKey> p1, jni::ref<java::util::Set> p2) { return base_::new_object(p1, p2); }
	jni::ref<javax::crypto::SecretKey> getSecretKey() { return call_method<"getSecretKey", jni::ref<javax::crypto::SecretKey>>(); }
	jni::ref<java::util::Set> getAttributes() { return call_method<"getAttributes", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	KeyStore_SecretKeyEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_SECRETKEYENTRY
