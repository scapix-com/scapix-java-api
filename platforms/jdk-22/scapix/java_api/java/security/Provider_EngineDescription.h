// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_ENGINEDESCRIPTION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_ENGINEDESCRIPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class Provider_EngineDescription; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::Provider_EngineDescription>
{
	static constexpr fixed_string class_name = "java/security/Provider$EngineDescription";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_ENGINEDESCRIPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_ENGINEDESCRIPTION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_ENGINEDESCRIPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::security::Provider_EngineDescription : public jni::object_base<"java/security/Provider$EngineDescription",
	java::lang::Object>
{
public:


protected:

	Provider_EngineDescription(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_ENGINEDESCRIPTION
