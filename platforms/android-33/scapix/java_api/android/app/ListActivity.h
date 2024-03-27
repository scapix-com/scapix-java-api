// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Activity.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_LISTACTIVITY_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_LISTACTIVITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class ListActivity; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::ListActivity>
{
	static constexpr fixed_string class_name = "android/app/ListActivity";
	using base_classes = std::tuple<scapix::java_api::android::app::Activity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_LISTACTIVITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_LISTACTIVITY)
#define SCAPIX_JAVA_API_ANDROID_APP_LISTACTIVITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/widget/ListAdapter.h>
#include <scapix/java_api/android/widget/ListView.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::ListActivity : public jni::object_base<"android/app/ListActivity",
	android::app::Activity>
{
public:

	static jni::ref<android::app::ListActivity> new_object() { return base_::new_object(); }
	void onContentChanged() { return call_method<"onContentChanged", void>(); }
	void setListAdapter(jni::ref<android::widget::ListAdapter> adapter) { return call_method<"setListAdapter", void>(adapter); }
	void setSelection(jint position) { return call_method<"setSelection", void>(position); }
	jint getSelectedItemPosition() { return call_method<"getSelectedItemPosition", jint>(); }
	jlong getSelectedItemId() { return call_method<"getSelectedItemId", jlong>(); }
	jni::ref<android::widget::ListView> getListView() { return call_method<"getListView", jni::ref<android::widget::ListView>>(); }
	jni::ref<android::widget::ListAdapter> getListAdapter() { return call_method<"getListAdapter", jni::ref<android::widget::ListAdapter>>(); }

protected:

	ListActivity(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_LISTACTIVITY
