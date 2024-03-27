// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class ContentProviderOperation_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::ContentProviderOperation_Builder>
{
	static constexpr fixed_string class_name = "android/content/ContentProviderOperation$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentProviderOperation.h>
#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::ContentProviderOperation_Builder : public jni::object_base<"android/content/ContentProviderOperation$Builder",
	java::lang::Object>
{
public:

	jni::ref<android::content::ContentProviderOperation> build() { return call_method<"build", jni::ref<android::content::ContentProviderOperation>>(); }
	jni::ref<android::content::ContentProviderOperation_Builder> withValues(jni::ref<android::content::ContentValues> values) { return call_method<"withValues", jni::ref<android::content::ContentProviderOperation_Builder>>(values); }
	jni::ref<android::content::ContentProviderOperation_Builder> withValue(jni::ref<java::lang::String> key, jni::ref<java::lang::Object> value) { return call_method<"withValue", jni::ref<android::content::ContentProviderOperation_Builder>>(key, value); }
	jni::ref<android::content::ContentProviderOperation_Builder> withValueBackReferences(jni::ref<android::content::ContentValues> backReferences) { return call_method<"withValueBackReferences", jni::ref<android::content::ContentProviderOperation_Builder>>(backReferences); }
	jni::ref<android::content::ContentProviderOperation_Builder> withValueBackReference(jni::ref<java::lang::String> key, jint fromIndex) { return call_method<"withValueBackReference", jni::ref<android::content::ContentProviderOperation_Builder>>(key, fromIndex); }
	jni::ref<android::content::ContentProviderOperation_Builder> withValueBackReference(jni::ref<java::lang::String> key, jint fromIndex, jni::ref<java::lang::String> fromKey) { return call_method<"withValueBackReference", jni::ref<android::content::ContentProviderOperation_Builder>>(key, fromIndex, fromKey); }
	jni::ref<android::content::ContentProviderOperation_Builder> withExtras(jni::ref<android::os::Bundle> extras) { return call_method<"withExtras", jni::ref<android::content::ContentProviderOperation_Builder>>(extras); }
	jni::ref<android::content::ContentProviderOperation_Builder> withExtra(jni::ref<java::lang::String> key, jni::ref<java::lang::Object> value) { return call_method<"withExtra", jni::ref<android::content::ContentProviderOperation_Builder>>(key, value); }
	jni::ref<android::content::ContentProviderOperation_Builder> withExtraBackReference(jni::ref<java::lang::String> key, jint fromIndex) { return call_method<"withExtraBackReference", jni::ref<android::content::ContentProviderOperation_Builder>>(key, fromIndex); }
	jni::ref<android::content::ContentProviderOperation_Builder> withExtraBackReference(jni::ref<java::lang::String> key, jint fromIndex, jni::ref<java::lang::String> fromKey) { return call_method<"withExtraBackReference", jni::ref<android::content::ContentProviderOperation_Builder>>(key, fromIndex, fromKey); }
	jni::ref<android::content::ContentProviderOperation_Builder> withSelection(jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs) { return call_method<"withSelection", jni::ref<android::content::ContentProviderOperation_Builder>>(selection, selectionArgs); }
	jni::ref<android::content::ContentProviderOperation_Builder> withSelectionBackReference(jint index, jint fromIndex) { return call_method<"withSelectionBackReference", jni::ref<android::content::ContentProviderOperation_Builder>>(index, fromIndex); }
	jni::ref<android::content::ContentProviderOperation_Builder> withSelectionBackReference(jint index, jint fromIndex, jni::ref<java::lang::String> fromKey) { return call_method<"withSelectionBackReference", jni::ref<android::content::ContentProviderOperation_Builder>>(index, fromIndex, fromKey); }
	jni::ref<android::content::ContentProviderOperation_Builder> withExpectedCount(jint count) { return call_method<"withExpectedCount", jni::ref<android::content::ContentProviderOperation_Builder>>(count); }
	jni::ref<android::content::ContentProviderOperation_Builder> withYieldAllowed(jboolean yieldAllowed) { return call_method<"withYieldAllowed", jni::ref<android::content::ContentProviderOperation_Builder>>(yieldAllowed); }
	jni::ref<android::content::ContentProviderOperation_Builder> withExceptionAllowed(jboolean exceptionAllowed) { return call_method<"withExceptionAllowed", jni::ref<android::content::ContentProviderOperation_Builder>>(exceptionAllowed); }

protected:

	ContentProviderOperation_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_BUILDER
