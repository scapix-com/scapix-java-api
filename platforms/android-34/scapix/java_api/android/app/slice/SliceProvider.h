// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/ContentProvider.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_SLICE_SLICEPROVIDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_SLICE_SLICEPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::slice { class SliceProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::slice::SliceProvider>
{
	static constexpr fixed_string class_name = "android/app/slice/SliceProvider";
	using base_classes = std::tuple<scapix::java_api::android::content::ContentProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SLICE_SLICEPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_SLICE_SLICEPROVIDER)
#define SCAPIX_JAVA_API_ANDROID_APP_SLICE_SLICEPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/app/slice/Slice.h>
#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/pm/ProviderInfo.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::slice::SliceProvider : public jni::object_base<"android/app/slice/SliceProvider",
	android::content::ContentProvider>
{
public:

	static jni::ref<java::lang::String> SLICE_TYPE() { return get_static_field<"SLICE_TYPE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::app::slice::SliceProvider> new_object(jni::ref<jni::array<java::lang::String>> autoGrantPermissions) { return base_::new_object(autoGrantPermissions); }
	static jni::ref<android::app::slice::SliceProvider> new_object() { return base_::new_object(); }
	void attachInfo(jni::ref<android::content::Context> context, jni::ref<android::content::pm::ProviderInfo> info) { return call_method<"attachInfo", void>(context, info); }
	jni::ref<android::app::slice::Slice> onBindSlice(jni::ref<android::net::Uri> sliceUri, jni::ref<java::util::Set> supportedSpecs) { return call_method<"onBindSlice", jni::ref<android::app::slice::Slice>>(sliceUri, supportedSpecs); }
	void onSlicePinned(jni::ref<android::net::Uri> sliceUri) { return call_method<"onSlicePinned", void>(sliceUri); }
	void onSliceUnpinned(jni::ref<android::net::Uri> sliceUri) { return call_method<"onSliceUnpinned", void>(sliceUri); }
	jni::ref<java::util::Collection> onGetSliceDescendants(jni::ref<android::net::Uri> uri) { return call_method<"onGetSliceDescendants", jni::ref<java::util::Collection>>(uri); }
	jni::ref<android::net::Uri> onMapIntentToUri(jni::ref<android::content::Intent> intent) { return call_method<"onMapIntentToUri", jni::ref<android::net::Uri>>(intent); }
	jni::ref<android::app::PendingIntent> onCreatePermissionRequest(jni::ref<android::net::Uri> sliceUri) { return call_method<"onCreatePermissionRequest", jni::ref<android::app::PendingIntent>>(sliceUri); }
	jint update(jni::ref<android::net::Uri> uri, jni::ref<android::content::ContentValues> values, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs) { return call_method<"update", jint>(uri, values, selection, selectionArgs); }
	jint delete_(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs) { return call_method<"delete", jint>(uri, selection, selectionArgs); }
	jni::ref<android::database::Cursor> query(jni::ref<android::net::Uri> uri, jni::ref<jni::array<java::lang::String>> projection, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> sortOrder) { return call_method<"query", jni::ref<android::database::Cursor>>(uri, projection, selection, selectionArgs, sortOrder); }
	jni::ref<android::database::Cursor> query(jni::ref<android::net::Uri> uri, jni::ref<jni::array<java::lang::String>> projection, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> sortOrder, jni::ref<android::os::CancellationSignal> cancellationSignal) { return call_method<"query", jni::ref<android::database::Cursor>>(uri, projection, selection, selectionArgs, sortOrder, cancellationSignal); }
	jni::ref<android::database::Cursor> query(jni::ref<android::net::Uri> uri, jni::ref<jni::array<java::lang::String>> projection, jni::ref<android::os::Bundle> queryArgs, jni::ref<android::os::CancellationSignal> cancellationSignal) { return call_method<"query", jni::ref<android::database::Cursor>>(uri, projection, queryArgs, cancellationSignal); }
	jni::ref<android::net::Uri> insert(jni::ref<android::net::Uri> uri, jni::ref<android::content::ContentValues> values) { return call_method<"insert", jni::ref<android::net::Uri>>(uri, values); }
	jni::ref<java::lang::String> getType(jni::ref<android::net::Uri> uri) { return call_method<"getType", jni::ref<java::lang::String>>(uri); }
	jni::ref<android::os::Bundle> call(jni::ref<java::lang::String> method, jni::ref<java::lang::String> arg, jni::ref<android::os::Bundle> extras) { return call_method<"call", jni::ref<android::os::Bundle>>(method, arg, extras); }

protected:

	SliceProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SLICE_SLICEPROVIDER