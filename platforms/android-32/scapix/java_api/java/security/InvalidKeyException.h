// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/KeyException.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_INVALIDKEYEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_INVALIDKEYEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class InvalidKeyException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::InvalidKeyException>
{
	static constexpr fixed_string class_name = "java/security/InvalidKeyException";
	using base_classes = std::tuple<scapix::java_api::java::security::KeyException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INVALIDKEYEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_INVALIDKEYEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_INVALIDKEYEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::InvalidKeyException : public jni::object_base<"java/security/InvalidKeyException",
	java::security::KeyException>
{
public:

	static jni::ref<java::security::InvalidKeyException> new_object() { return base_::new_object(); }
	static jni::ref<java::security::InvalidKeyException> new_object(jni::ref<java::lang::String> msg) { return base_::new_object(msg); }
	static jni::ref<java::security::InvalidKeyException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
	static jni::ref<java::security::InvalidKeyException> new_object(jni::ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

protected:

	InvalidKeyException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INVALIDKEYEXCEPTION
