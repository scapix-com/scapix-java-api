// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_HTTP_X509TRUSTMANAGEREXTENSIONS_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_X509TRUSTMANAGEREXTENSIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::http { class X509TrustManagerExtensions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::http::X509TrustManagerExtensions>
{
	static constexpr fixed_string class_name = "android/net/http/X509TrustManagerExtensions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_X509TRUSTMANAGEREXTENSIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_HTTP_X509TRUSTMANAGEREXTENSIONS)
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_X509TRUSTMANAGEREXTENSIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/net/ssl/X509TrustManager.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::http::X509TrustManagerExtensions : public jni::object_base<"android/net/http/X509TrustManagerExtensions",
	java::lang::Object>
{
public:

	static jni::ref<android::net::http::X509TrustManagerExtensions> new_object(jni::ref<javax::net::ssl::X509TrustManager> tm) { return base_::new_object(tm); }
	jni::ref<java::util::List> checkServerTrusted(jni::ref<jni::array<java::security::cert::X509Certificate>> chain, jni::ref<java::lang::String> authType, jni::ref<java::lang::String> host) { return call_method<"checkServerTrusted", jni::ref<java::util::List>>(chain, authType, host); }
	jboolean isUserAddedCertificate(jni::ref<java::security::cert::X509Certificate> cert) { return call_method<"isUserAddedCertificate", jboolean>(cert); }
	jboolean isSameTrustConfiguration(jni::ref<java::lang::String> hostname1, jni::ref<java::lang::String> hostname2) { return call_method<"isSameTrustConfiguration", jboolean>(hostname1, hostname2); }

protected:

	X509TrustManagerExtensions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_X509TRUSTMANAGEREXTENSIONS
