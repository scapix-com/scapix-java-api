// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/widget/Adapter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_LISTADAPTER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_LISTADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class ListAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::ListAdapter>
{
	static constexpr fixed_string class_name = "android/widget/ListAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::widget::Adapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_LISTADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_LISTADAPTER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_LISTADAPTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::ListAdapter : public jni::object_base<"android/widget/ListAdapter",
	java::lang::Object,
	android::widget::Adapter>
{
public:

	jboolean areAllItemsEnabled() { return call_method<"areAllItemsEnabled", jboolean>(); }
	jboolean isEnabled(jint p1) { return call_method<"isEnabled", jboolean>(p1); }

protected:

	ListAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_LISTADAPTER