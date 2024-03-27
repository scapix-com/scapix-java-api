// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/interfaces/EdECKey.h>
#include <scapix/java_api/java/security/PrivateKey.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_EDECPRIVATEKEY_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_EDECPRIVATEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::interfaces { class EdECPrivateKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::interfaces::EdECPrivateKey>
{
	static constexpr fixed_string class_name = "java/security/interfaces/EdECPrivateKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::interfaces::EdECKey, scapix::java_api::java::security::PrivateKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_EDECPRIVATEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_EDECPRIVATEKEY)
#define SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_EDECPRIVATEKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::interfaces::EdECPrivateKey : public jni::object_base<"java/security/interfaces/EdECPrivateKey",
	java::lang::Object,
	java::security::interfaces::EdECKey,
	java::security::PrivateKey>
{
public:

	jni::ref<java::util::Optional> getBytes() { return call_method<"getBytes", jni::ref<java::util::Optional>>(); }

protected:

	EdECPrivateKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_EDECPRIVATEKEY