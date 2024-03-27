// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_POLICYSPI_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_POLICYSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class PolicySpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::PolicySpi>
{
	static constexpr fixed_string class_name = "java/security/PolicySpi";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_POLICYSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_POLICYSPI)
#define SCAPIX_JAVA_API_JAVA_SECURITY_POLICYSPI

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::PolicySpi : public jni::object_base<"java/security/PolicySpi",
	java::lang::Object>
{
public:

	static jni::ref<java::security::PolicySpi> new_object() { return base_::new_object(); }

protected:

	PolicySpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_POLICYSPI