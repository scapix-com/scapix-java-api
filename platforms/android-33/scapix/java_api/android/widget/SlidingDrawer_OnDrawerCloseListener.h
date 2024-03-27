// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_SLIDINGDRAWER_ONDRAWERCLOSELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SLIDINGDRAWER_ONDRAWERCLOSELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class SlidingDrawer_OnDrawerCloseListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::SlidingDrawer_OnDrawerCloseListener>
{
	static constexpr fixed_string class_name = "android/widget/SlidingDrawer$OnDrawerCloseListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SLIDINGDRAWER_ONDRAWERCLOSELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_SLIDINGDRAWER_ONDRAWERCLOSELISTENER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SLIDINGDRAWER_ONDRAWERCLOSELISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::SlidingDrawer_OnDrawerCloseListener : public jni::object_base<"android/widget/SlidingDrawer$OnDrawerCloseListener",
	java::lang::Object>
{
public:

	void onDrawerClosed() { return call_method<"onDrawerClosed", void>(); }

protected:

	SlidingDrawer_OnDrawerCloseListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SLIDINGDRAWER_ONDRAWERCLOSELISTENER
