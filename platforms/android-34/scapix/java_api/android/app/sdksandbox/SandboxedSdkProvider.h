// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_SANDBOXEDSDKPROVIDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_SANDBOXEDSDKPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::sdksandbox { class SandboxedSdkProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::sdksandbox::SandboxedSdkProvider>
{
	static constexpr fixed_string class_name = "android/app/sdksandbox/SandboxedSdkProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_SANDBOXEDSDKPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_SANDBOXEDSDKPROVIDER)
#define SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_SANDBOXEDSDKPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/sdksandbox/SandboxedSdk.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/view/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::sdksandbox::SandboxedSdkProvider : public jni::object_base<"android/app/sdksandbox/SandboxedSdkProvider",
	java::lang::Object>
{
public:

	static jni::ref<android::app::sdksandbox::SandboxedSdkProvider> new_object() { return base_::new_object(); }
	void attachContext(jni::ref<android::content::Context> context) { return call_method<"attachContext", void>(context); }
	jni::ref<android::content::Context> getContext() { return call_method<"getContext", jni::ref<android::content::Context>>(); }
	jni::ref<android::app::sdksandbox::SandboxedSdk> onLoadSdk(jni::ref<android::os::Bundle> p1) { return call_method<"onLoadSdk", jni::ref<android::app::sdksandbox::SandboxedSdk>>(p1); }
	void beforeUnloadSdk() { return call_method<"beforeUnloadSdk", void>(); }
	jni::ref<android::view::View> getView(jni::ref<android::content::Context> p1, jni::ref<android::os::Bundle> p2, jint p3, jint p4) { return call_method<"getView", jni::ref<android::view::View>>(p1, p2, p3, p4); }

protected:

	SandboxedSdkProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_SANDBOXEDSDKPROVIDER
