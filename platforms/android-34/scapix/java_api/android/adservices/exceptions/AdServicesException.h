// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ADSERVICES_EXCEPTIONS_ADSERVICESEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_EXCEPTIONS_ADSERVICESEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::adservices::exceptions { class AdServicesException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::adservices::exceptions::AdServicesException>
{
	static constexpr fixed_string class_name = "android/adservices/exceptions/AdServicesException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_EXCEPTIONS_ADSERVICESEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ADSERVICES_EXCEPTIONS_ADSERVICESEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_EXCEPTIONS_ADSERVICESEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::adservices::exceptions::AdServicesException : public jni::object_base<"android/adservices/exceptions/AdServicesException",
	java::lang::Exception>
{
public:

	static jni::ref<android::adservices::exceptions::AdServicesException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> e) { return base_::new_object(message, e); }
	static jni::ref<android::adservices::exceptions::AdServicesException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }

protected:

	AdServicesException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_EXCEPTIONS_ADSERVICESEXCEPTION
