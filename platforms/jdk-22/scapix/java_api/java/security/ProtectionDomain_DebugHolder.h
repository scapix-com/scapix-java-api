// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_DEBUGHOLDER_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_DEBUGHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class ProtectionDomain_DebugHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::ProtectionDomain_DebugHolder>
{
	static constexpr fixed_string class_name = "java/security/ProtectionDomain$DebugHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_DEBUGHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_DEBUGHOLDER)
#define SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_DEBUGHOLDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::security::ProtectionDomain_DebugHolder : public jni::object_base<"java/security/ProtectionDomain$DebugHolder",
	java::lang::Object>
{
public:


protected:

	ProtectionDomain_DebugHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_DEBUGHOLDER
