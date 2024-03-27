// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/Identity.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SIGNER_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SIGNER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class Signer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::Signer>
{
	static constexpr fixed_string class_name = "java/security/Signer";
	using base_classes = std::tuple<scapix::java_api::java::security::Identity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SIGNER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SIGNER)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SIGNER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/IdentityScope.h>
#include <scapix/java_api/java/security/KeyPair.h>
#include <scapix/java_api/java/security/PrivateKey.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::Signer : public jni::object_base<"java/security/Signer",
	java::security::Identity>
{
public:

	static jni::ref<java::security::Signer> new_object(jni::ref<java::lang::String> name) { return base_::new_object(name); }
	static jni::ref<java::security::Signer> new_object(jni::ref<java::lang::String> name, jni::ref<java::security::IdentityScope> scope) { return base_::new_object(name, scope); }
	jni::ref<java::security::PrivateKey> getPrivateKey() { return call_method<"getPrivateKey", jni::ref<java::security::PrivateKey>>(); }
	void setKeyPair(jni::ref<java::security::KeyPair> pair) { return call_method<"setKeyPair", void>(pair); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Signer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SIGNER