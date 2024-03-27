// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class ContentProviderOperation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::ContentProviderOperation>
{
	static constexpr fixed_string class_name = "android/content/ContentProviderOperation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDEROPERATION)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDEROPERATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentProvider.h>
#include <scapix/java_api/android/content/ContentProviderOperation_Builder.h>
#include <scapix/java_api/android/content/ContentProviderResult.h>
#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::ContentProviderOperation : public jni::object_base<"android/content/ContentProviderOperation",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = ContentProviderOperation_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	static jni::ref<android::content::ContentProviderOperation_Builder> newInsert(jni::ref<android::net::Uri> uri) { return call_static_method<"newInsert", jni::ref<android::content::ContentProviderOperation_Builder>>(uri); }
	static jni::ref<android::content::ContentProviderOperation_Builder> newUpdate(jni::ref<android::net::Uri> uri) { return call_static_method<"newUpdate", jni::ref<android::content::ContentProviderOperation_Builder>>(uri); }
	static jni::ref<android::content::ContentProviderOperation_Builder> newDelete(jni::ref<android::net::Uri> uri) { return call_static_method<"newDelete", jni::ref<android::content::ContentProviderOperation_Builder>>(uri); }
	static jni::ref<android::content::ContentProviderOperation_Builder> newAssertQuery(jni::ref<android::net::Uri> uri) { return call_static_method<"newAssertQuery", jni::ref<android::content::ContentProviderOperation_Builder>>(uri); }
	jni::ref<android::net::Uri> getUri() { return call_method<"getUri", jni::ref<android::net::Uri>>(); }
	jboolean isYieldAllowed() { return call_method<"isYieldAllowed", jboolean>(); }
	jboolean isWriteOperation() { return call_method<"isWriteOperation", jboolean>(); }
	jboolean isReadOperation() { return call_method<"isReadOperation", jboolean>(); }
	jni::ref<android::content::ContentProviderResult> apply(jni::ref<android::content::ContentProvider> provider, jni::ref<jni::array<android::content::ContentProviderResult>> backRefs, jint numBackRefs) { return call_method<"apply", jni::ref<android::content::ContentProviderResult>>(provider, backRefs, numBackRefs); }
	jni::ref<android::content::ContentValues> resolveValueBackReferences(jni::ref<jni::array<android::content::ContentProviderResult>> backRefs, jint numBackRefs) { return call_method<"resolveValueBackReferences", jni::ref<android::content::ContentValues>>(backRefs, numBackRefs); }
	jni::ref<jni::array<java::lang::String>> resolveSelectionArgsBackReferences(jni::ref<jni::array<android::content::ContentProviderResult>> backRefs, jint numBackRefs) { return call_method<"resolveSelectionArgsBackReferences", jni::ref<jni::array<java::lang::String>>>(backRefs, numBackRefs); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	ContentProviderOperation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDEROPERATION
