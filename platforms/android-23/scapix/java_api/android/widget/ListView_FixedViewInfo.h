// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_LISTVIEW_FIXEDVIEWINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_LISTVIEW_FIXEDVIEWINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class ListView_FixedViewInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::ListView_FixedViewInfo>
{
	static constexpr fixed_string class_name = "android/widget/ListView$FixedViewInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_LISTVIEW_FIXEDVIEWINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_LISTVIEW_FIXEDVIEWINFO)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_LISTVIEW_FIXEDVIEWINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/widget/ListView.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::ListView_FixedViewInfo : public jni::object_base<"android/widget/ListView$FixedViewInfo",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> data() { return get_field<"data", jni::ref<java::lang::Object>>(); }
	void data(jni::ref<java::lang::Object> v) { set_field<"data", jni::ref<java::lang::Object>>(v); }
	jboolean isSelectable() { return get_field<"isSelectable", jboolean>(); }
	void isSelectable(jboolean v) { set_field<"isSelectable", jboolean>(v); }
	jni::ref<android::view::View> view() { return get_field<"view", jni::ref<android::view::View>>(); }
	void view(jni::ref<android::view::View> v) { set_field<"view", jni::ref<android::view::View>>(v); }

	static jni::ref<android::widget::ListView_FixedViewInfo> new_object(jni::ref<android::widget::ListView> p1) { return base_::new_object(p1); }

protected:

	ListView_FixedViewInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_LISTVIEW_FIXEDVIEWINFO