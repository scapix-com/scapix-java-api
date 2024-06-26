// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ONRECEIVECONTENTLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ONRECEIVECONTENTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class OnReceiveContentListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::OnReceiveContentListener>
{
	static constexpr fixed_string class_name = "android/view/OnReceiveContentListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ONRECEIVECONTENTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ONRECEIVECONTENTLISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ONRECEIVECONTENTLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/ContentInfo.h>
#include <scapix/java_api/android/view/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::OnReceiveContentListener : public jni::object_base<"android/view/OnReceiveContentListener",
	java::lang::Object>
{
public:

	jni::ref<android::view::ContentInfo> onReceiveContent(jni::ref<android::view::View> p1, jni::ref<android::view::ContentInfo> p2) { return call_method<"onReceiveContent", jni::ref<android::view::ContentInfo>>(p1, p2); }

protected:

	OnReceiveContentListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ONRECEIVECONTENTLISTENER
