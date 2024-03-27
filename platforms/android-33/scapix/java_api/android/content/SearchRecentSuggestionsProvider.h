// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/ContentProvider.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class SearchRecentSuggestionsProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::SearchRecentSuggestionsProvider>
{
	static constexpr fixed_string class_name = "android/content/SearchRecentSuggestionsProvider";
	using base_classes = std::tuple<scapix::java_api::android::content::ContentProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::SearchRecentSuggestionsProvider : public jni::object_base<"android/content/SearchRecentSuggestionsProvider",
	android::content::ContentProvider>
{
public:

	static jint DATABASE_MODE_2LINES() { return get_static_field<"DATABASE_MODE_2LINES", jint>(); }
	static jint DATABASE_MODE_QUERIES() { return get_static_field<"DATABASE_MODE_QUERIES", jint>(); }

	static jni::ref<android::content::SearchRecentSuggestionsProvider> new_object() { return base_::new_object(); }
	jint delete_(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs) { return call_method<"delete", jint>(uri, selection, selectionArgs); }
	jni::ref<java::lang::String> getType(jni::ref<android::net::Uri> uri) { return call_method<"getType", jni::ref<java::lang::String>>(uri); }
	jni::ref<android::net::Uri> insert(jni::ref<android::net::Uri> uri, jni::ref<android::content::ContentValues> values) { return call_method<"insert", jni::ref<android::net::Uri>>(uri, values); }
	jboolean onCreate() { return call_method<"onCreate", jboolean>(); }
	jni::ref<android::database::Cursor> query(jni::ref<android::net::Uri> uri, jni::ref<jni::array<java::lang::String>> projection, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> sortOrder) { return call_method<"query", jni::ref<android::database::Cursor>>(uri, projection, selection, selectionArgs, sortOrder); }
	jint update(jni::ref<android::net::Uri> uri, jni::ref<android::content::ContentValues> values, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs) { return call_method<"update", jint>(uri, values, selection, selectionArgs); }

protected:

	SearchRecentSuggestionsProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER
