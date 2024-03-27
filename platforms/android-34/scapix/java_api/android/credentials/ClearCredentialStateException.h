// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CREDENTIALS_CLEARCREDENTIALSTATEEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_CREDENTIALS_CLEARCREDENTIALSTATEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::credentials { class ClearCredentialStateException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::credentials::ClearCredentialStateException>
{
	static constexpr fixed_string class_name = "android/credentials/ClearCredentialStateException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CREDENTIALS_CLEARCREDENTIALSTATEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CREDENTIALS_CLEARCREDENTIALSTATEEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_CREDENTIALS_CLEARCREDENTIALSTATEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::credentials::ClearCredentialStateException : public jni::object_base<"android/credentials/ClearCredentialStateException",
	java::lang::Exception>
{
public:

	static jni::ref<java::lang::String> TYPE_UNKNOWN() { return get_static_field<"TYPE_UNKNOWN", jni::ref<java::lang::String>>(); }

	static jni::ref<android::credentials::ClearCredentialStateException> new_object(jni::ref<java::lang::String> type, jni::ref<java::lang::String> message) { return base_::new_object(type, message); }
	static jni::ref<android::credentials::ClearCredentialStateException> new_object(jni::ref<java::lang::String> type, jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(type, message, cause); }
	static jni::ref<android::credentials::ClearCredentialStateException> new_object(jni::ref<java::lang::String> type, jni::ref<java::lang::Throwable> cause) { return base_::new_object(type, cause); }
	static jni::ref<android::credentials::ClearCredentialStateException> new_object(jni::ref<java::lang::String> type) { return base_::new_object(type); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }

protected:

	ClearCredentialStateException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CREDENTIALS_CLEARCREDENTIALSTATEEXCEPTION
