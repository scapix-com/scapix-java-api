// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/BaseExpandableListAdapter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class SimpleExpandableListAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::SimpleExpandableListAdapter>
{
	static constexpr fixed_string class_name = "android/widget/SimpleExpandableListAdapter";
	using base_classes = std::tuple<scapix::java_api::android::widget::BaseExpandableListAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::SimpleExpandableListAdapter : public jni::object_base<"android/widget/SimpleExpandableListAdapter",
	android::widget::BaseExpandableListAdapter>
{
public:

	static jni::ref<android::widget::SimpleExpandableListAdapter> new_object(jni::ref<android::content::Context> context, jni::ref<java::util::List> groupData, jint groupLayout, jni::ref<jni::array<java::lang::String>> groupFrom, jni::ref<jni::array<jint>> groupTo, jni::ref<java::util::List> childData, jint childLayout, jni::ref<jni::array<java::lang::String>> childFrom, jni::ref<jni::array<jint>> childTo) { return base_::new_object(context, groupData, groupLayout, groupFrom, groupTo, childData, childLayout, childFrom, childTo); }
	static jni::ref<android::widget::SimpleExpandableListAdapter> new_object(jni::ref<android::content::Context> context, jni::ref<java::util::List> groupData, jint expandedGroupLayout, jint collapsedGroupLayout, jni::ref<jni::array<java::lang::String>> groupFrom, jni::ref<jni::array<jint>> groupTo, jni::ref<java::util::List> childData, jint childLayout, jni::ref<jni::array<java::lang::String>> childFrom, jni::ref<jni::array<jint>> childTo) { return base_::new_object(context, groupData, expandedGroupLayout, collapsedGroupLayout, groupFrom, groupTo, childData, childLayout, childFrom, childTo); }
	static jni::ref<android::widget::SimpleExpandableListAdapter> new_object(jni::ref<android::content::Context> context, jni::ref<java::util::List> groupData, jint expandedGroupLayout, jint collapsedGroupLayout, jni::ref<jni::array<java::lang::String>> groupFrom, jni::ref<jni::array<jint>> groupTo, jni::ref<java::util::List> childData, jint childLayout, jint lastChildLayout, jni::ref<jni::array<java::lang::String>> childFrom, jni::ref<jni::array<jint>> childTo) { return base_::new_object(context, groupData, expandedGroupLayout, collapsedGroupLayout, groupFrom, groupTo, childData, childLayout, lastChildLayout, childFrom, childTo); }
	jni::ref<java::lang::Object> getChild(jint groupPosition, jint childPosition) { return call_method<"getChild", jni::ref<java::lang::Object>>(groupPosition, childPosition); }
	jlong getChildId(jint groupPosition, jint childPosition) { return call_method<"getChildId", jlong>(groupPosition, childPosition); }
	jni::ref<android::view::View> getChildView(jint groupPosition, jint childPosition, jboolean isLastChild, jni::ref<android::view::View> convertView, jni::ref<android::view::ViewGroup> parent) { return call_method<"getChildView", jni::ref<android::view::View>>(groupPosition, childPosition, isLastChild, convertView, parent); }
	jni::ref<android::view::View> newChildView(jboolean isLastChild, jni::ref<android::view::ViewGroup> parent) { return call_method<"newChildView", jni::ref<android::view::View>>(isLastChild, parent); }
	jint getChildrenCount(jint groupPosition) { return call_method<"getChildrenCount", jint>(groupPosition); }
	jni::ref<java::lang::Object> getGroup(jint groupPosition) { return call_method<"getGroup", jni::ref<java::lang::Object>>(groupPosition); }
	jint getGroupCount() { return call_method<"getGroupCount", jint>(); }
	jlong getGroupId(jint groupPosition) { return call_method<"getGroupId", jlong>(groupPosition); }
	jni::ref<android::view::View> getGroupView(jint groupPosition, jboolean isExpanded, jni::ref<android::view::View> convertView, jni::ref<android::view::ViewGroup> parent) { return call_method<"getGroupView", jni::ref<android::view::View>>(groupPosition, isExpanded, convertView, parent); }
	jni::ref<android::view::View> newGroupView(jboolean isExpanded, jni::ref<android::view::ViewGroup> parent) { return call_method<"newGroupView", jni::ref<android::view::View>>(isExpanded, parent); }
	jboolean isChildSelectable(jint groupPosition, jint childPosition) { return call_method<"isChildSelectable", jboolean>(groupPosition, childPosition); }
	jboolean hasStableIds() { return call_method<"hasStableIds", jboolean>(); }

protected:

	SimpleExpandableListAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER
