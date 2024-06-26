// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/ActionProvider.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_MEDIAROUTEACTIONPROVIDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_MEDIAROUTEACTIONPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class MediaRouteActionProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::MediaRouteActionProvider>
{
	static constexpr fixed_string class_name = "android/app/MediaRouteActionProvider";
	using base_classes = std::tuple<scapix::java_api::android::view::ActionProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_MEDIAROUTEACTIONPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_MEDIAROUTEACTIONPROVIDER)
#define SCAPIX_JAVA_API_ANDROID_APP_MEDIAROUTEACTIONPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/view/MenuItem.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/View_OnClickListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::MediaRouteActionProvider : public jni::object_base<"android/app/MediaRouteActionProvider",
	android::view::ActionProvider>
{
public:

	static jni::ref<android::app::MediaRouteActionProvider> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	void setRouteTypes(jint types) { return call_method<"setRouteTypes", void>(types); }
	void setExtendedSettingsClickListener(jni::ref<android::view::View_OnClickListener> listener) { return call_method<"setExtendedSettingsClickListener", void>(listener); }
	jni::ref<android::view::View> onCreateActionView() { return call_method<"onCreateActionView", jni::ref<android::view::View>>(); }
	jni::ref<android::view::View> onCreateActionView(jni::ref<android::view::MenuItem> item) { return call_method<"onCreateActionView", jni::ref<android::view::View>>(item); }
	jboolean onPerformDefaultAction() { return call_method<"onPerformDefaultAction", jboolean>(); }
	jboolean overridesItemVisibility() { return call_method<"overridesItemVisibility", jboolean>(); }
	jboolean isVisible() { return call_method<"isVisible", jboolean>(); }

protected:

	MediaRouteActionProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_MEDIAROUTEACTIONPROVIDER
