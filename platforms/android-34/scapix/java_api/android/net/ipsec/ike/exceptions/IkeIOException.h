// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/net/ipsec/ike/exceptions/IkeNonProtocolException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_EXCEPTIONS_IKEIOEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_EXCEPTIONS_IKEIOEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::ipsec::ike::exceptions { class IkeIOException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::ipsec::ike::exceptions::IkeIOException>
{
	static constexpr fixed_string class_name = "android/net/ipsec/ike/exceptions/IkeIOException";
	using base_classes = std::tuple<scapix::java_api::android::net::ipsec::ike::exceptions::IkeNonProtocolException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_EXCEPTIONS_IKEIOEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_EXCEPTIONS_IKEIOEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_EXCEPTIONS_IKEIOEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/IOException.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::ipsec::ike::exceptions::IkeIOException : public jni::object_base<"android/net/ipsec/ike/exceptions/IkeIOException",
	android::net::ipsec::ike::exceptions::IkeNonProtocolException>
{
public:

	static jni::ref<android::net::ipsec::ike::exceptions::IkeIOException> new_object(jni::ref<java::io::IOException> cause) { return base_::new_object(cause); }
	jni::ref<java::io::IOException> getCause() { return call_method<"getCause", jni::ref<java::io::IOException>>(); }
	jni::ref<java::lang::Throwable> initCause(jni::ref<java::lang::Throwable> cause) { return call_method<"initCause", jni::ref<java::lang::Throwable>>(cause); }

protected:

	IkeIOException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_EXCEPTIONS_IKEIOEXCEPTION