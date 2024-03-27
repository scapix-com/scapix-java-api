// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_KEY_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_KEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class ProtectionDomain_Key; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::ProtectionDomain_Key>
{
	static constexpr fixed_string class_name = "java/security/ProtectionDomain$Key";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_KEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_KEY)
#define SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_KEY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::security::ProtectionDomain_Key : public jni::object_base<"java/security/ProtectionDomain$Key",
	java::lang::Object>
{
public:


protected:

	ProtectionDomain_Key(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_KEY
