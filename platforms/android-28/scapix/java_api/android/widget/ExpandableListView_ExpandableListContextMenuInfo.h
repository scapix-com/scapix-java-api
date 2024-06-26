// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/ContextMenu_ContextMenuInfo.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_EXPANDABLELISTVIEW_EXPANDABLELISTCONTEXTMENUINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_EXPANDABLELISTVIEW_EXPANDABLELISTCONTEXTMENUINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class ExpandableListView_ExpandableListContextMenuInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::ExpandableListView_ExpandableListContextMenuInfo>
{
	static constexpr fixed_string class_name = "android/widget/ExpandableListView$ExpandableListContextMenuInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::view::ContextMenu_ContextMenuInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_EXPANDABLELISTVIEW_EXPANDABLELISTCONTEXTMENUINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_EXPANDABLELISTVIEW_EXPANDABLELISTCONTEXTMENUINFO)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_EXPANDABLELISTVIEW_EXPANDABLELISTCONTEXTMENUINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::ExpandableListView_ExpandableListContextMenuInfo : public jni::object_base<"android/widget/ExpandableListView$ExpandableListContextMenuInfo",
	java::lang::Object,
	android::view::ContextMenu_ContextMenuInfo>
{
public:

	jlong id() { return get_field<"id", jlong>(); }
	void id(jlong v) { set_field<"id", jlong>(v); }
	jlong packedPosition() { return get_field<"packedPosition", jlong>(); }
	void packedPosition(jlong v) { set_field<"packedPosition", jlong>(v); }
	jni::ref<android::view::View> targetView() { return get_field<"targetView", jni::ref<android::view::View>>(); }
	void targetView(jni::ref<android::view::View> v) { set_field<"targetView", jni::ref<android::view::View>>(v); }

	static jni::ref<android::widget::ExpandableListView_ExpandableListContextMenuInfo> new_object(jni::ref<android::view::View> targetView, jlong packedPosition, jlong p3) { return base_::new_object(targetView, packedPosition, p3); }

protected:

	ExpandableListView_ExpandableListContextMenuInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_EXPANDABLELISTVIEW_EXPANDABLELISTCONTEXTMENUINFO
