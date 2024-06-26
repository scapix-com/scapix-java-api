// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/widget/ExpandableListAdapter.h>
#include <scapix/java_api/android/widget/HeterogeneousExpandableList.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_BASEEXPANDABLELISTADAPTER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_BASEEXPANDABLELISTADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class BaseExpandableListAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::BaseExpandableListAdapter>
{
	static constexpr fixed_string class_name = "android/widget/BaseExpandableListAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::widget::ExpandableListAdapter, scapix::java_api::android::widget::HeterogeneousExpandableList>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_BASEEXPANDABLELISTADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_BASEEXPANDABLELISTADAPTER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_BASEEXPANDABLELISTADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/database/DataSetObserver.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::BaseExpandableListAdapter : public jni::object_base<"android/widget/BaseExpandableListAdapter",
	java::lang::Object,
	android::widget::ExpandableListAdapter,
	android::widget::HeterogeneousExpandableList>
{
public:

	static jni::ref<android::widget::BaseExpandableListAdapter> new_object() { return base_::new_object(); }
	void registerDataSetObserver(jni::ref<android::database::DataSetObserver> observer) { return call_method<"registerDataSetObserver", void>(observer); }
	void unregisterDataSetObserver(jni::ref<android::database::DataSetObserver> observer) { return call_method<"unregisterDataSetObserver", void>(observer); }
	void notifyDataSetInvalidated() { return call_method<"notifyDataSetInvalidated", void>(); }
	void notifyDataSetChanged() { return call_method<"notifyDataSetChanged", void>(); }
	jboolean areAllItemsEnabled() { return call_method<"areAllItemsEnabled", jboolean>(); }
	void onGroupCollapsed(jint groupPosition) { return call_method<"onGroupCollapsed", void>(groupPosition); }
	void onGroupExpanded(jint groupPosition) { return call_method<"onGroupExpanded", void>(groupPosition); }
	jlong getCombinedChildId(jlong groupId, jlong p2) { return call_method<"getCombinedChildId", jlong>(groupId, p2); }
	jlong getCombinedGroupId(jlong groupId) { return call_method<"getCombinedGroupId", jlong>(groupId); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jint getChildType(jint groupPosition, jint childPosition) { return call_method<"getChildType", jint>(groupPosition, childPosition); }
	jint getChildTypeCount() { return call_method<"getChildTypeCount", jint>(); }
	jint getGroupType(jint groupPosition) { return call_method<"getGroupType", jint>(groupPosition); }
	jint getGroupTypeCount() { return call_method<"getGroupTypeCount", jint>(); }

protected:

	BaseExpandableListAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_BASEEXPANDABLELISTADAPTER
