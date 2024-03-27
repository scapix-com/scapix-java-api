// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/GeneralSecurityException.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class UnrecoverableEntryException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::UnrecoverableEntryException>
{
	static constexpr fixed_string class_name = "java/security/UnrecoverableEntryException";
	using base_classes = std::tuple<scapix::java_api::java::security::GeneralSecurityException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::UnrecoverableEntryException : public jni::object_base<"java/security/UnrecoverableEntryException",
	java::security::GeneralSecurityException>
{
public:

	static jni::ref<java::security::UnrecoverableEntryException> new_object() { return base_::new_object(); }
	static jni::ref<java::security::UnrecoverableEntryException> new_object(jni::ref<java::lang::String> msg) { return base_::new_object(msg); }

protected:

	UnrecoverableEntryException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION
