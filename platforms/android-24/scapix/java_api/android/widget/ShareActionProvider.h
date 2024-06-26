// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/ActionProvider.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_SHAREACTIONPROVIDER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SHAREACTIONPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class ShareActionProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::ShareActionProvider>
{
	static constexpr fixed_string class_name = "android/widget/ShareActionProvider";
	using base_classes = std::tuple<scapix::java_api::android::view::ActionProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SHAREACTIONPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_SHAREACTIONPROVIDER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SHAREACTIONPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/view/SubMenu.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/widget/ShareActionProvider_OnShareTargetSelectedListener.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::ShareActionProvider : public jni::object_base<"android/widget/ShareActionProvider",
	android::view::ActionProvider>
{
public:

	using OnShareTargetSelectedListener = ShareActionProvider_OnShareTargetSelectedListener;

	static jni::ref<java::lang::String> DEFAULT_SHARE_HISTORY_FILE_NAME() { return get_static_field<"DEFAULT_SHARE_HISTORY_FILE_NAME", jni::ref<java::lang::String>>(); }

	static jni::ref<android::widget::ShareActionProvider> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	void setOnShareTargetSelectedListener(jni::ref<android::widget::ShareActionProvider_OnShareTargetSelectedListener> listener) { return call_method<"setOnShareTargetSelectedListener", void>(listener); }
	jni::ref<android::view::View> onCreateActionView() { return call_method<"onCreateActionView", jni::ref<android::view::View>>(); }
	jboolean hasSubMenu() { return call_method<"hasSubMenu", jboolean>(); }
	void onPrepareSubMenu(jni::ref<android::view::SubMenu> subMenu) { return call_method<"onPrepareSubMenu", void>(subMenu); }
	void setShareHistoryFileName(jni::ref<java::lang::String> shareHistoryFile) { return call_method<"setShareHistoryFileName", void>(shareHistoryFile); }
	void setShareIntent(jni::ref<android::content::Intent> shareIntent) { return call_method<"setShareIntent", void>(shareIntent); }

protected:

	ShareActionProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SHAREACTIONPROVIDER
