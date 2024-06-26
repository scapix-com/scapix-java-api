// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::ipsec::ike { class IkeSession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::ipsec::ike::IkeSession>
{
	static constexpr fixed_string class_name = "android/net/ipsec/ike/IkeSession";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSION)
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/net/ipsec/ike/ChildSessionCallback.h>
#include <scapix/java_api/android/net/ipsec/ike/ChildSessionParams.h>
#include <scapix/java_api/android/net/ipsec/ike/IkeSessionCallback.h>
#include <scapix/java_api/android/net/ipsec/ike/IkeSessionParams.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::ipsec::ike::IkeSession : public jni::object_base<"android/net/ipsec/ike/IkeSession",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	static jni::ref<android::net::ipsec::ike::IkeSession> new_object(jni::ref<android::content::Context> context, jni::ref<android::net::ipsec::ike::IkeSessionParams> ikeSessionParams, jni::ref<android::net::ipsec::ike::ChildSessionParams> firstChildSessionParams, jni::ref<java::util::concurrent::Executor> userCbExecutor, jni::ref<android::net::ipsec::ike::IkeSessionCallback> ikeSessionCallback, jni::ref<android::net::ipsec::ike::ChildSessionCallback> firstChildSessionCallback) { return base_::new_object(context, ikeSessionParams, firstChildSessionParams, userCbExecutor, ikeSessionCallback, firstChildSessionCallback); }
	void finalize() { return call_method<"finalize", void>(); }
	void openChildSession(jni::ref<android::net::ipsec::ike::ChildSessionParams> childSessionParams, jni::ref<android::net::ipsec::ike::ChildSessionCallback> childSessionCallback) { return call_method<"openChildSession", void>(childSessionParams, childSessionCallback); }
	void closeChildSession(jni::ref<android::net::ipsec::ike::ChildSessionCallback> childSessionCallback) { return call_method<"closeChildSession", void>(childSessionCallback); }
	void close() { return call_method<"close", void>(); }
	void kill() { return call_method<"kill", void>(); }

protected:

	IkeSession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSION
