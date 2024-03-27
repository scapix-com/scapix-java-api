// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/Key.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_PUBLICKEY_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_PUBLICKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class PublicKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::PublicKey>
{
	static constexpr fixed_string class_name = "java/security/PublicKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::Key>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PUBLICKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_PUBLICKEY)
#define SCAPIX_JAVA_API_JAVA_SECURITY_PUBLICKEY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::PublicKey : public jni::object_base<"java/security/PublicKey",
	java::lang::Object,
	java::security::Key>
{
public:

	static jlong serialVersionUID() { return get_static_field<"serialVersionUID", jlong>(); }


protected:

	PublicKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PUBLICKEY
