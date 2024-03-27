// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class PrivilegedActionException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::PrivilegedActionException>
{
	static constexpr fixed_string class_name = "java/security/PrivilegedActionException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::PrivilegedActionException : public jni::object_base<"java/security/PrivilegedActionException",
	java::lang::Exception>
{
public:

	static jni::ref<java::security::PrivilegedActionException> new_object(jni::ref<java::lang::Exception> exception) { return base_::new_object(exception); }
	jni::ref<java::lang::Exception> getException() { return call_method<"getException", jni::ref<java::lang::Exception>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PrivilegedActionException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION
