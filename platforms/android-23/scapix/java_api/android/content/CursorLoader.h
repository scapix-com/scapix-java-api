// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/AsyncTaskLoader.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_CURSORLOADER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CURSORLOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class CursorLoader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::CursorLoader>
{
	static constexpr fixed_string class_name = "android/content/CursorLoader";
	using base_classes = std::tuple<scapix::java_api::android::content::AsyncTaskLoader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CURSORLOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_CURSORLOADER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CURSORLOADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::CursorLoader : public jni::object_base<"android/content/CursorLoader",
	android::content::AsyncTaskLoader>
{
public:

	static jni::ref<android::content::CursorLoader> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::content::CursorLoader> new_object(jni::ref<android::content::Context> context, jni::ref<android::net::Uri> uri, jni::ref<jni::array<java::lang::String>> projection, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> sortOrder) { return base_::new_object(context, uri, projection, selection, selectionArgs, sortOrder); }
	jni::ref<android::database::Cursor> loadInBackground() { return call_method<"loadInBackground", jni::ref<android::database::Cursor>>(); }
	void cancelLoadInBackground() { return call_method<"cancelLoadInBackground", void>(); }
	void deliverResult(jni::ref<android::database::Cursor> cursor) { return call_method<"deliverResult", void>(cursor); }
	void onCanceled(jni::ref<android::database::Cursor> cursor) { return call_method<"onCanceled", void>(cursor); }
	jni::ref<android::net::Uri> getUri() { return call_method<"getUri", jni::ref<android::net::Uri>>(); }
	void setUri(jni::ref<android::net::Uri> uri) { return call_method<"setUri", void>(uri); }
	jni::ref<jni::array<java::lang::String>> getProjection() { return call_method<"getProjection", jni::ref<jni::array<java::lang::String>>>(); }
	void setProjection(jni::ref<jni::array<java::lang::String>> projection) { return call_method<"setProjection", void>(projection); }
	jni::ref<java::lang::String> getSelection() { return call_method<"getSelection", jni::ref<java::lang::String>>(); }
	void setSelection(jni::ref<java::lang::String> selection) { return call_method<"setSelection", void>(selection); }
	jni::ref<jni::array<java::lang::String>> getSelectionArgs() { return call_method<"getSelectionArgs", jni::ref<jni::array<java::lang::String>>>(); }
	void setSelectionArgs(jni::ref<jni::array<java::lang::String>> selectionArgs) { return call_method<"setSelectionArgs", void>(selectionArgs); }
	jni::ref<java::lang::String> getSortOrder() { return call_method<"getSortOrder", jni::ref<java::lang::String>>(); }
	void setSortOrder(jni::ref<java::lang::String> sortOrder) { return call_method<"setSortOrder", void>(sortOrder); }
	void dump(jni::ref<java::lang::String> prefix, jni::ref<java::io::FileDescriptor> fd, jni::ref<java::io::PrintWriter> writer, jni::ref<jni::array<java::lang::String>> args) { return call_method<"dump", void>(prefix, fd, writer, args); }

protected:

	CursorLoader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CURSORLOADER
