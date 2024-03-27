// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_CONFIRMATIONALREADYPRESENTINGEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_CONFIRMATIONALREADYPRESENTINGEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security { class ConfirmationAlreadyPresentingException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::ConfirmationAlreadyPresentingException>
{
	static constexpr fixed_string class_name = "android/security/ConfirmationAlreadyPresentingException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_CONFIRMATIONALREADYPRESENTINGEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_CONFIRMATIONALREADYPRESENTINGEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_CONFIRMATIONALREADYPRESENTINGEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::ConfirmationAlreadyPresentingException : public jni::object_base<"android/security/ConfirmationAlreadyPresentingException",
	java::lang::Exception>
{
public:

	static jni::ref<android::security::ConfirmationAlreadyPresentingException> new_object() { return base_::new_object(); }
	static jni::ref<android::security::ConfirmationAlreadyPresentingException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }

protected:

	ConfirmationAlreadyPresentingException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_CONFIRMATIONALREADYPRESENTINGEXCEPTION
