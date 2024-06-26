// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ADSERVICES_APPSETID_APPSETIDMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_APPSETID_APPSETIDMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::adservices::appsetid { class AppSetIdManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::adservices::appsetid::AppSetIdManager>
{
	static constexpr fixed_string class_name = "android/adservices/appsetid/AppSetIdManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_APPSETID_APPSETIDMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ADSERVICES_APPSETID_APPSETIDMANAGER)
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_APPSETID_APPSETIDMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/OutcomeReceiver.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::adservices::appsetid::AppSetIdManager : public jni::object_base<"android/adservices/appsetid/AppSetIdManager",
	java::lang::Object>
{
public:

	static jni::ref<android::adservices::appsetid::AppSetIdManager> get(jni::ref<android::content::Context> context) { return call_static_method<"get", jni::ref<android::adservices::appsetid::AppSetIdManager>>(context); }
	void getAppSetId(jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::os::OutcomeReceiver> callback) { return call_method<"getAppSetId", void>(executor, callback); }

protected:

	AppSetIdManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_APPSETID_APPSETIDMANAGER
