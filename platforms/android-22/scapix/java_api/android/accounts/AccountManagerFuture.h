// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ACCOUNTS_ACCOUNTMANAGERFUTURE_FWD
#define SCAPIX_JAVA_API_ANDROID_ACCOUNTS_ACCOUNTMANAGERFUTURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::accounts { class AccountManagerFuture; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::accounts::AccountManagerFuture>
{
	static constexpr fixed_string class_name = "android/accounts/AccountManagerFuture";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCOUNTS_ACCOUNTMANAGERFUTURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ACCOUNTS_ACCOUNTMANAGERFUTURE)
#define SCAPIX_JAVA_API_ANDROID_ACCOUNTS_ACCOUNTMANAGERFUTURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::accounts::AccountManagerFuture : public jni::object_base<"android/accounts/AccountManagerFuture",
	java::lang::Object>
{
public:

	jboolean cancel(jboolean p1) { return call_method<"cancel", jboolean>(p1); }
	jboolean isCancelled() { return call_method<"isCancelled", jboolean>(); }
	jboolean isDone() { return call_method<"isDone", jboolean>(); }
	jni::ref<java::lang::Object> getResult() { return call_method<"getResult", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getResult(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"getResult", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	AccountManagerFuture(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCOUNTS_ACCOUNTMANAGERFUTURE
