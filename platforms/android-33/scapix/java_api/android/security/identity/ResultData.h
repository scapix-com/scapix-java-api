// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_RESULTDATA_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_RESULTDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security::identity { class ResultData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::identity::ResultData>
{
	static constexpr fixed_string class_name = "android/security/identity/ResultData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_RESULTDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_RESULTDATA)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_RESULTDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::identity::ResultData : public jni::object_base<"android/security/identity/ResultData",
	java::lang::Object>
{
public:

	static jint STATUS_NOT_IN_REQUEST_MESSAGE() { return get_static_field<"STATUS_NOT_IN_REQUEST_MESSAGE", jint>(); }
	static jint STATUS_NOT_REQUESTED() { return get_static_field<"STATUS_NOT_REQUESTED", jint>(); }
	static jint STATUS_NO_ACCESS_CONTROL_PROFILES() { return get_static_field<"STATUS_NO_ACCESS_CONTROL_PROFILES", jint>(); }
	static jint STATUS_NO_SUCH_ENTRY() { return get_static_field<"STATUS_NO_SUCH_ENTRY", jint>(); }
	static jint STATUS_OK() { return get_static_field<"STATUS_OK", jint>(); }
	static jint STATUS_READER_AUTHENTICATION_FAILED() { return get_static_field<"STATUS_READER_AUTHENTICATION_FAILED", jint>(); }
	static jint STATUS_USER_AUTHENTICATION_FAILED() { return get_static_field<"STATUS_USER_AUTHENTICATION_FAILED", jint>(); }

	jni::ref<jni::array<jbyte>> getAuthenticatedData() { return call_method<"getAuthenticatedData", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getMessageAuthenticationCode() { return call_method<"getMessageAuthenticationCode", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getStaticAuthenticationData() { return call_method<"getStaticAuthenticationData", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::util::Collection> getNamespaces() { return call_method<"getNamespaces", jni::ref<java::util::Collection>>(); }
	jni::ref<java::util::Collection> getEntryNames(jni::ref<java::lang::String> p1) { return call_method<"getEntryNames", jni::ref<java::util::Collection>>(p1); }
	jni::ref<java::util::Collection> getRetrievedEntryNames(jni::ref<java::lang::String> p1) { return call_method<"getRetrievedEntryNames", jni::ref<java::util::Collection>>(p1); }
	jint getStatus(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getStatus", jint>(p1, p2); }
	jni::ref<jni::array<jbyte>> getEntry(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getEntry", jni::ref<jni::array<jbyte>>>(p1, p2); }

protected:

	ResultData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_RESULTDATA
