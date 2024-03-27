// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_SERVICEWORKERCONTROLLER_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_SERVICEWORKERCONTROLLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class ServiceWorkerController; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::ServiceWorkerController>
{
	static constexpr fixed_string class_name = "android/webkit/ServiceWorkerController";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_SERVICEWORKERCONTROLLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_SERVICEWORKERCONTROLLER)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_SERVICEWORKERCONTROLLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/webkit/ServiceWorkerClient.h>
#include <scapix/java_api/android/webkit/ServiceWorkerWebSettings.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::ServiceWorkerController : public jni::object_base<"android/webkit/ServiceWorkerController",
	java::lang::Object>
{
public:

	static jni::ref<android::webkit::ServiceWorkerController> new_object() { return base_::new_object(); }
	static jni::ref<android::webkit::ServiceWorkerController> getInstance() { return call_static_method<"getInstance", jni::ref<android::webkit::ServiceWorkerController>>(); }
	jni::ref<android::webkit::ServiceWorkerWebSettings> getServiceWorkerWebSettings() { return call_method<"getServiceWorkerWebSettings", jni::ref<android::webkit::ServiceWorkerWebSettings>>(); }
	void setServiceWorkerClient(jni::ref<android::webkit::ServiceWorkerClient> p1) { return call_method<"setServiceWorkerClient", void>(p1); }

protected:

	ServiceWorkerController(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_SERVICEWORKERCONTROLLER
