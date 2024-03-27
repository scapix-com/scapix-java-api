// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_GENERICDOCUMENT_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_GENERICDOCUMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::appsearch { class GenericDocument; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::appsearch::GenericDocument>
{
	static constexpr fixed_string class_name = "android/app/appsearch/GenericDocument";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_GENERICDOCUMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_GENERICDOCUMENT)
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_GENERICDOCUMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/android/app/appsearch/GenericDocument_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::appsearch::GenericDocument : public jni::object_base<"android/app/appsearch/GenericDocument",
	java::lang::Object>
{
public:

	using Builder = GenericDocument_Builder;

	static jint getMaxIndexedProperties() { return call_static_method<"getMaxIndexedProperties", jint>(); }
	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getNamespace() { return call_method<"getNamespace", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSchemaType() { return call_method<"getSchemaType", jni::ref<java::lang::String>>(); }
	jlong getCreationTimestampMillis() { return call_method<"getCreationTimestampMillis", jlong>(); }
	jlong getTtlMillis() { return call_method<"getTtlMillis", jlong>(); }
	jint getScore() { return call_method<"getScore", jint>(); }
	jni::ref<java::util::Set> getPropertyNames() { return call_method<"getPropertyNames", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> path) { return call_method<"getProperty", jni::ref<java::lang::Object>>(path); }
	jni::ref<java::lang::String> getPropertyString(jni::ref<java::lang::String> path) { return call_method<"getPropertyString", jni::ref<java::lang::String>>(path); }
	jlong getPropertyLong(jni::ref<java::lang::String> path) { return call_method<"getPropertyLong", jlong>(path); }
	jdouble getPropertyDouble(jni::ref<java::lang::String> path) { return call_method<"getPropertyDouble", jdouble>(path); }
	jboolean getPropertyBoolean(jni::ref<java::lang::String> path) { return call_method<"getPropertyBoolean", jboolean>(path); }
	jni::ref<jni::array<jbyte>> getPropertyBytes(jni::ref<java::lang::String> path) { return call_method<"getPropertyBytes", jni::ref<jni::array<jbyte>>>(path); }
	jni::ref<android::app::appsearch::GenericDocument> getPropertyDocument(jni::ref<java::lang::String> path) { return call_method<"getPropertyDocument", jni::ref<android::app::appsearch::GenericDocument>>(path); }
	jni::ref<jni::array<java::lang::String>> getPropertyStringArray(jni::ref<java::lang::String> path) { return call_method<"getPropertyStringArray", jni::ref<jni::array<java::lang::String>>>(path); }
	jni::ref<jni::array<jlong>> getPropertyLongArray(jni::ref<java::lang::String> path) { return call_method<"getPropertyLongArray", jni::ref<jni::array<jlong>>>(path); }
	jni::ref<jni::array<jdouble>> getPropertyDoubleArray(jni::ref<java::lang::String> path) { return call_method<"getPropertyDoubleArray", jni::ref<jni::array<jdouble>>>(path); }
	jni::ref<jni::array<jboolean>> getPropertyBooleanArray(jni::ref<java::lang::String> path) { return call_method<"getPropertyBooleanArray", jni::ref<jni::array<jboolean>>>(path); }
	jni::ref<jni::array<jni::array<jbyte>>> getPropertyBytesArray(jni::ref<java::lang::String> path) { return call_method<"getPropertyBytesArray", jni::ref<jni::array<jni::array<jbyte>>>>(path); }
	jni::ref<jni::array<android::app::appsearch::GenericDocument>> getPropertyDocumentArray(jni::ref<java::lang::String> path) { return call_method<"getPropertyDocumentArray", jni::ref<jni::array<android::app::appsearch::GenericDocument>>>(path); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	GenericDocument(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_GENERICDOCUMENT
