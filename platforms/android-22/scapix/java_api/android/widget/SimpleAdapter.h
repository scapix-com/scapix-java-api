// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/BaseAdapter.h>
#include <scapix/java_api/android/widget/Filterable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLEADAPTER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLEADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class SimpleAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::SimpleAdapter>
{
	static constexpr fixed_string class_name = "android/widget/SimpleAdapter";
	using base_classes = std::tuple<scapix::java_api::android::widget::BaseAdapter, scapix::java_api::android::widget::Filterable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLEADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLEADAPTER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLEADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#include <scapix/java_api/android/widget/Filter.h>
#include <scapix/java_api/android/widget/ImageView.h>
#include <scapix/java_api/android/widget/SimpleAdapter_ViewBinder.h>
#include <scapix/java_api/android/widget/TextView.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::SimpleAdapter : public jni::object_base<"android/widget/SimpleAdapter",
	android::widget::BaseAdapter,
	android::widget::Filterable>
{
public:

	using ViewBinder = SimpleAdapter_ViewBinder;

	static jni::ref<android::widget::SimpleAdapter> new_object(jni::ref<android::content::Context> context, jni::ref<java::util::List> data, jint resource, jni::ref<jni::array<java::lang::String>> from, jni::ref<jni::array<jint>> to) { return base_::new_object(context, data, resource, from, to); }
	jint getCount() { return call_method<"getCount", jint>(); }
	jni::ref<java::lang::Object> getItem(jint position) { return call_method<"getItem", jni::ref<java::lang::Object>>(position); }
	jlong getItemId(jint position) { return call_method<"getItemId", jlong>(position); }
	jni::ref<android::view::View> getView(jint position, jni::ref<android::view::View> convertView, jni::ref<android::view::ViewGroup> parent) { return call_method<"getView", jni::ref<android::view::View>>(position, convertView, parent); }
	void setDropDownViewResource(jint resource) { return call_method<"setDropDownViewResource", void>(resource); }
	jni::ref<android::view::View> getDropDownView(jint position, jni::ref<android::view::View> convertView, jni::ref<android::view::ViewGroup> parent) { return call_method<"getDropDownView", jni::ref<android::view::View>>(position, convertView, parent); }
	jni::ref<android::widget::SimpleAdapter_ViewBinder> getViewBinder() { return call_method<"getViewBinder", jni::ref<android::widget::SimpleAdapter_ViewBinder>>(); }
	void setViewBinder(jni::ref<android::widget::SimpleAdapter_ViewBinder> viewBinder) { return call_method<"setViewBinder", void>(viewBinder); }
	void setViewImage(jni::ref<android::widget::ImageView> v, jint value) { return call_method<"setViewImage", void>(v, value); }
	void setViewImage(jni::ref<android::widget::ImageView> v, jni::ref<java::lang::String> value) { return call_method<"setViewImage", void>(v, value); }
	void setViewText(jni::ref<android::widget::TextView> v, jni::ref<java::lang::String> text) { return call_method<"setViewText", void>(v, text); }
	jni::ref<android::widget::Filter> getFilter() { return call_method<"getFilter", jni::ref<android::widget::Filter>>(); }

protected:

	SimpleAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLEADAPTER