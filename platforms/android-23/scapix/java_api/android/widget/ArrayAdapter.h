// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/BaseAdapter.h>
#include <scapix/java_api/android/widget/Filterable.h>
#include <scapix/java_api/android/widget/ThemedSpinnerAdapter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_ARRAYADAPTER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ARRAYADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class ArrayAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::ArrayAdapter>
{
	static constexpr fixed_string class_name = "android/widget/ArrayAdapter";
	using base_classes = std::tuple<scapix::java_api::android::widget::BaseAdapter, scapix::java_api::android::widget::Filterable, scapix::java_api::android::widget::ThemedSpinnerAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ARRAYADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_ARRAYADAPTER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ARRAYADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#include <scapix/java_api/android/widget/Filter.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::ArrayAdapter : public jni::object_base<"android/widget/ArrayAdapter",
	android::widget::BaseAdapter,
	android::widget::Filterable,
	android::widget::ThemedSpinnerAdapter>
{
public:

	static jni::ref<android::widget::ArrayAdapter> new_object(jni::ref<android::content::Context> context, jint resource) { return base_::new_object(context, resource); }
	static jni::ref<android::widget::ArrayAdapter> new_object(jni::ref<android::content::Context> context, jint resource, jint textViewResourceId) { return base_::new_object(context, resource, textViewResourceId); }
	static jni::ref<android::widget::ArrayAdapter> new_object(jni::ref<android::content::Context> context, jint resource, jni::ref<jni::array<java::lang::Object>> objects) { return base_::new_object(context, resource, objects); }
	static jni::ref<android::widget::ArrayAdapter> new_object(jni::ref<android::content::Context> context, jint resource, jint textViewResourceId, jni::ref<jni::array<java::lang::Object>> objects) { return base_::new_object(context, resource, textViewResourceId, objects); }
	static jni::ref<android::widget::ArrayAdapter> new_object(jni::ref<android::content::Context> context, jint resource, jni::ref<java::util::List> objects) { return base_::new_object(context, resource, objects); }
	static jni::ref<android::widget::ArrayAdapter> new_object(jni::ref<android::content::Context> context, jint resource, jint textViewResourceId, jni::ref<java::util::List> objects) { return base_::new_object(context, resource, textViewResourceId, objects); }
	void add(jni::ref<java::lang::Object> object) { return call_method<"add", void>(object); }
	void addAll(jni::ref<java::util::Collection> collection) { return call_method<"addAll", void>(collection); }
	void addAll(jni::ref<jni::array<java::lang::Object>> items) { return call_method<"addAll", void>(items); }
	void insert(jni::ref<java::lang::Object> object, jint index) { return call_method<"insert", void>(object, index); }
	void remove(jni::ref<java::lang::Object> object) { return call_method<"remove", void>(object); }
	void clear() { return call_method<"clear", void>(); }
	void sort(jni::ref<java::util::Comparator> comparator) { return call_method<"sort", void>(comparator); }
	void notifyDataSetChanged() { return call_method<"notifyDataSetChanged", void>(); }
	void setNotifyOnChange(jboolean notifyOnChange) { return call_method<"setNotifyOnChange", void>(notifyOnChange); }
	jni::ref<android::content::Context> getContext() { return call_method<"getContext", jni::ref<android::content::Context>>(); }
	jint getCount() { return call_method<"getCount", jint>(); }
	jni::ref<java::lang::Object> getItem(jint position) { return call_method<"getItem", jni::ref<java::lang::Object>>(position); }
	jint getPosition(jni::ref<java::lang::Object> item) { return call_method<"getPosition", jint>(item); }
	jlong getItemId(jint position) { return call_method<"getItemId", jlong>(position); }
	jni::ref<android::view::View> getView(jint position, jni::ref<android::view::View> convertView, jni::ref<android::view::ViewGroup> parent) { return call_method<"getView", jni::ref<android::view::View>>(position, convertView, parent); }
	void setDropDownViewResource(jint resource) { return call_method<"setDropDownViewResource", void>(resource); }
	void setDropDownViewTheme(jni::ref<android::content::res::Resources_Theme> theme) { return call_method<"setDropDownViewTheme", void>(theme); }
	jni::ref<android::content::res::Resources_Theme> getDropDownViewTheme() { return call_method<"getDropDownViewTheme", jni::ref<android::content::res::Resources_Theme>>(); }
	jni::ref<android::view::View> getDropDownView(jint position, jni::ref<android::view::View> convertView, jni::ref<android::view::ViewGroup> parent) { return call_method<"getDropDownView", jni::ref<android::view::View>>(position, convertView, parent); }
	static jni::ref<android::widget::ArrayAdapter> createFromResource(jni::ref<android::content::Context> context, jint textArrayResId, jint textViewResId) { return call_static_method<"createFromResource", jni::ref<android::widget::ArrayAdapter>>(context, textArrayResId, textViewResId); }
	jni::ref<android::widget::Filter> getFilter() { return call_method<"getFilter", jni::ref<android::widget::Filter>>(); }

protected:

	ArrayAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ARRAYADAPTER
