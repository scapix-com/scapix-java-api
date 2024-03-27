// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/content/ComponentCallbacks2.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class ContentProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::ContentProvider>
{
	static constexpr fixed_string class_name = "android/content/ContentProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::content::ComponentCallbacks2>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentProvider_CallingIdentity.h>
#include <scapix/java_api/android/content/ContentProvider_PipeDataWriter.h>
#include <scapix/java_api/android/content/ContentProviderResult.h>
#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/pm/PathPermission.h>
#include <scapix/java_api/android/content/pm/ProviderInfo.h>
#include <scapix/java_api/android/content/res/AssetFileDescriptor.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::ContentProvider : public jni::object_base<"android/content/ContentProvider",
	java::lang::Object,
	android::content::ComponentCallbacks2>
{
public:

	using PipeDataWriter = ContentProvider_PipeDataWriter;
	using CallingIdentity = ContentProvider_CallingIdentity;

	static jni::ref<android::content::ContentProvider> new_object() { return base_::new_object(); }
	jni::ref<android::content::Context> getContext() { return call_method<"getContext", jni::ref<android::content::Context>>(); }
	jni::ref<java::lang::String> getCallingPackage() { return call_method<"getCallingPackage", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::ContentProvider_CallingIdentity> clearCallingIdentity() { return call_method<"clearCallingIdentity", jni::ref<android::content::ContentProvider_CallingIdentity>>(); }
	void restoreCallingIdentity(jni::ref<android::content::ContentProvider_CallingIdentity> identity) { return call_method<"restoreCallingIdentity", void>(identity); }
	jni::ref<java::lang::String> getReadPermission() { return call_method<"getReadPermission", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getWritePermission() { return call_method<"getWritePermission", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<android::content::pm::PathPermission>> getPathPermissions() { return call_method<"getPathPermissions", jni::ref<jni::array<android::content::pm::PathPermission>>>(); }
	jboolean onCreate() { return call_method<"onCreate", jboolean>(); }
	void onConfigurationChanged(jni::ref<android::content::res::Configuration> newConfig) { return call_method<"onConfigurationChanged", void>(newConfig); }
	void onLowMemory() { return call_method<"onLowMemory", void>(); }
	void onTrimMemory(jint level) { return call_method<"onTrimMemory", void>(level); }
	jni::ref<android::database::Cursor> query(jni::ref<android::net::Uri> p1, jni::ref<jni::array<java::lang::String>> p2, jni::ref<java::lang::String> p3, jni::ref<jni::array<java::lang::String>> p4, jni::ref<java::lang::String> p5) { return call_method<"query", jni::ref<android::database::Cursor>>(p1, p2, p3, p4, p5); }
	jni::ref<android::database::Cursor> query(jni::ref<android::net::Uri> uri, jni::ref<jni::array<java::lang::String>> projection, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> sortOrder, jni::ref<android::os::CancellationSignal> cancellationSignal) { return call_method<"query", jni::ref<android::database::Cursor>>(uri, projection, selection, selectionArgs, sortOrder, cancellationSignal); }
	jni::ref<android::database::Cursor> query(jni::ref<android::net::Uri> uri, jni::ref<jni::array<java::lang::String>> projection, jni::ref<android::os::Bundle> queryArgs, jni::ref<android::os::CancellationSignal> cancellationSignal) { return call_method<"query", jni::ref<android::database::Cursor>>(uri, projection, queryArgs, cancellationSignal); }
	jni::ref<java::lang::String> getType(jni::ref<android::net::Uri> p1) { return call_method<"getType", jni::ref<java::lang::String>>(p1); }
	jni::ref<android::net::Uri> canonicalize(jni::ref<android::net::Uri> url) { return call_method<"canonicalize", jni::ref<android::net::Uri>>(url); }
	jni::ref<android::net::Uri> uncanonicalize(jni::ref<android::net::Uri> url) { return call_method<"uncanonicalize", jni::ref<android::net::Uri>>(url); }
	jboolean refresh(jni::ref<android::net::Uri> uri, jni::ref<android::os::Bundle> args, jni::ref<android::os::CancellationSignal> cancellationSignal) { return call_method<"refresh", jboolean>(uri, args, cancellationSignal); }
	jni::ref<android::net::Uri> insert(jni::ref<android::net::Uri> p1, jni::ref<android::content::ContentValues> p2) { return call_method<"insert", jni::ref<android::net::Uri>>(p1, p2); }
	jint bulkInsert(jni::ref<android::net::Uri> uri, jni::ref<jni::array<android::content::ContentValues>> values) { return call_method<"bulkInsert", jint>(uri, values); }
	jint delete_(jni::ref<android::net::Uri> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::String>> p3) { return call_method<"delete", jint>(p1, p2, p3); }
	jint update(jni::ref<android::net::Uri> p1, jni::ref<android::content::ContentValues> p2, jni::ref<java::lang::String> p3, jni::ref<jni::array<java::lang::String>> p4) { return call_method<"update", jint>(p1, p2, p3, p4); }
	jni::ref<android::os::ParcelFileDescriptor> openFile(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mode) { return call_method<"openFile", jni::ref<android::os::ParcelFileDescriptor>>(uri, mode); }
	jni::ref<android::os::ParcelFileDescriptor> openFile(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mode, jni::ref<android::os::CancellationSignal> signal) { return call_method<"openFile", jni::ref<android::os::ParcelFileDescriptor>>(uri, mode, signal); }
	jni::ref<android::content::res::AssetFileDescriptor> openAssetFile(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mode) { return call_method<"openAssetFile", jni::ref<android::content::res::AssetFileDescriptor>>(uri, mode); }
	jni::ref<android::content::res::AssetFileDescriptor> openAssetFile(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mode, jni::ref<android::os::CancellationSignal> signal) { return call_method<"openAssetFile", jni::ref<android::content::res::AssetFileDescriptor>>(uri, mode, signal); }
	jni::ref<jni::array<java::lang::String>> getStreamTypes(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mimeTypeFilter) { return call_method<"getStreamTypes", jni::ref<jni::array<java::lang::String>>>(uri, mimeTypeFilter); }
	jni::ref<android::content::res::AssetFileDescriptor> openTypedAssetFile(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mimeTypeFilter, jni::ref<android::os::Bundle> opts) { return call_method<"openTypedAssetFile", jni::ref<android::content::res::AssetFileDescriptor>>(uri, mimeTypeFilter, opts); }
	jni::ref<android::content::res::AssetFileDescriptor> openTypedAssetFile(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mimeTypeFilter, jni::ref<android::os::Bundle> opts, jni::ref<android::os::CancellationSignal> signal) { return call_method<"openTypedAssetFile", jni::ref<android::content::res::AssetFileDescriptor>>(uri, mimeTypeFilter, opts, signal); }
	jni::ref<android::os::ParcelFileDescriptor> openPipeHelper(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mimeType, jni::ref<android::os::Bundle> opts, jni::ref<java::lang::Object> args, jni::ref<android::content::ContentProvider_PipeDataWriter> func) { return call_method<"openPipeHelper", jni::ref<android::os::ParcelFileDescriptor>>(uri, mimeType, opts, args, func); }
	void attachInfo(jni::ref<android::content::Context> context, jni::ref<android::content::pm::ProviderInfo> info) { return call_method<"attachInfo", void>(context, info); }
	jni::ref<jni::array<android::content::ContentProviderResult>> applyBatch(jni::ref<java::lang::String> authority, jni::ref<java::util::ArrayList> operations) { return call_method<"applyBatch", jni::ref<jni::array<android::content::ContentProviderResult>>>(authority, operations); }
	jni::ref<jni::array<android::content::ContentProviderResult>> applyBatch(jni::ref<java::util::ArrayList> operations) { return call_method<"applyBatch", jni::ref<jni::array<android::content::ContentProviderResult>>>(operations); }
	jni::ref<android::os::Bundle> call(jni::ref<java::lang::String> authority, jni::ref<java::lang::String> method, jni::ref<java::lang::String> arg, jni::ref<android::os::Bundle> extras) { return call_method<"call", jni::ref<android::os::Bundle>>(authority, method, arg, extras); }
	jni::ref<android::os::Bundle> call(jni::ref<java::lang::String> method, jni::ref<java::lang::String> arg, jni::ref<android::os::Bundle> extras) { return call_method<"call", jni::ref<android::os::Bundle>>(method, arg, extras); }
	void shutdown() { return call_method<"shutdown", void>(); }
	void dump(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::io::PrintWriter> writer, jni::ref<jni::array<java::lang::String>> args) { return call_method<"dump", void>(fd, writer, args); }

protected:

	ContentProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDER
