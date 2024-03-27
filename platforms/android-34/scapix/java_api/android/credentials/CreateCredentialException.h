// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CREDENTIALS_CREATECREDENTIALEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_CREDENTIALS_CREATECREDENTIALEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::credentials { class CreateCredentialException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::credentials::CreateCredentialException>
{
	static constexpr fixed_string class_name = "android/credentials/CreateCredentialException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CREDENTIALS_CREATECREDENTIALEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CREDENTIALS_CREATECREDENTIALEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_CREDENTIALS_CREATECREDENTIALEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::credentials::CreateCredentialException : public jni::object_base<"android/credentials/CreateCredentialException",
	java::lang::Exception>
{
public:

	static jni::ref<java::lang::String> TYPE_INTERRUPTED() { return get_static_field<"TYPE_INTERRUPTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPE_NO_CREATE_OPTIONS() { return get_static_field<"TYPE_NO_CREATE_OPTIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPE_UNKNOWN() { return get_static_field<"TYPE_UNKNOWN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPE_USER_CANCELED() { return get_static_field<"TYPE_USER_CANCELED", jni::ref<java::lang::String>>(); }

	static jni::ref<android::credentials::CreateCredentialException> new_object(jni::ref<java::lang::String> type, jni::ref<java::lang::String> message) { return base_::new_object(type, message); }
	static jni::ref<android::credentials::CreateCredentialException> new_object(jni::ref<java::lang::String> type, jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(type, message, cause); }
	static jni::ref<android::credentials::CreateCredentialException> new_object(jni::ref<java::lang::String> type, jni::ref<java::lang::Throwable> cause) { return base_::new_object(type, cause); }
	static jni::ref<android::credentials::CreateCredentialException> new_object(jni::ref<java::lang::String> type) { return base_::new_object(type); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }

protected:

	CreateCredentialException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CREDENTIALS_CREATECREDENTIALEXCEPTION
