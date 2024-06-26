// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::acl { class LastOwnerException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::acl::LastOwnerException>
{
	static constexpr fixed_string class_name = "java/security/acl/LastOwnerException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::acl::LastOwnerException : public jni::object_base<"java/security/acl/LastOwnerException",
	java::lang::Exception>
{
public:

	static jni::ref<java::security::acl::LastOwnerException> new_object() { return base_::new_object(); }

protected:

	LastOwnerException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION
