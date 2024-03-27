// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_SLICE_SLICE_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_SLICE_SLICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::slice { class Slice; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::slice::Slice>
{
	static constexpr fixed_string class_name = "android/app/slice/Slice";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SLICE_SLICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_SLICE_SLICE)
#define SCAPIX_JAVA_API_ANDROID_APP_SLICE_SLICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/slice/SliceSpec.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/app/slice/Slice_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::slice::Slice : public jni::object_base<"android/app/slice/Slice",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = Slice_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jni::ref<java::lang::String> EXTRA_RANGE_VALUE() { return get_static_field<"EXTRA_RANGE_VALUE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_TOGGLE_STATE() { return get_static_field<"EXTRA_TOGGLE_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_ACTIONS() { return get_static_field<"HINT_ACTIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_ERROR() { return get_static_field<"HINT_ERROR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_HORIZONTAL() { return get_static_field<"HINT_HORIZONTAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_KEYWORDS() { return get_static_field<"HINT_KEYWORDS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_LARGE() { return get_static_field<"HINT_LARGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_LAST_UPDATED() { return get_static_field<"HINT_LAST_UPDATED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_LIST() { return get_static_field<"HINT_LIST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_LIST_ITEM() { return get_static_field<"HINT_LIST_ITEM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_NO_TINT() { return get_static_field<"HINT_NO_TINT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_PARTIAL() { return get_static_field<"HINT_PARTIAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_PERMISSION_REQUEST() { return get_static_field<"HINT_PERMISSION_REQUEST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_SEE_MORE() { return get_static_field<"HINT_SEE_MORE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_SELECTED() { return get_static_field<"HINT_SELECTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_SHORTCUT() { return get_static_field<"HINT_SHORTCUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_SUMMARY() { return get_static_field<"HINT_SUMMARY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_TITLE() { return get_static_field<"HINT_TITLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HINT_TTL() { return get_static_field<"HINT_TTL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBTYPE_COLOR() { return get_static_field<"SUBTYPE_COLOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBTYPE_CONTENT_DESCRIPTION() { return get_static_field<"SUBTYPE_CONTENT_DESCRIPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBTYPE_LAYOUT_DIRECTION() { return get_static_field<"SUBTYPE_LAYOUT_DIRECTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBTYPE_MAX() { return get_static_field<"SUBTYPE_MAX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBTYPE_MESSAGE() { return get_static_field<"SUBTYPE_MESSAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBTYPE_MILLIS() { return get_static_field<"SUBTYPE_MILLIS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBTYPE_PRIORITY() { return get_static_field<"SUBTYPE_PRIORITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBTYPE_RANGE() { return get_static_field<"SUBTYPE_RANGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBTYPE_SOURCE() { return get_static_field<"SUBTYPE_SOURCE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBTYPE_TOGGLE() { return get_static_field<"SUBTYPE_TOGGLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBTYPE_VALUE() { return get_static_field<"SUBTYPE_VALUE", jni::ref<java::lang::String>>(); }

	jni::ref<android::app::slice::SliceSpec> getSpec() { return call_method<"getSpec", jni::ref<android::app::slice::SliceSpec>>(); }
	jni::ref<android::net::Uri> getUri() { return call_method<"getUri", jni::ref<android::net::Uri>>(); }
	jni::ref<java::util::List> getItems() { return call_method<"getItems", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getHints() { return call_method<"getHints", jni::ref<java::util::List>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jboolean isCallerNeeded() { return call_method<"isCallerNeeded", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Slice(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SLICE_SLICE
