// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_MIMETYPEMAP_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_MIMETYPEMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class MimeTypeMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::MimeTypeMap>
{
	static constexpr fixed_string class_name = "android/webkit/MimeTypeMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_MIMETYPEMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_MIMETYPEMAP)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_MIMETYPEMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::MimeTypeMap : public jni::object_base<"android/webkit/MimeTypeMap",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> getFileExtensionFromUrl(jni::ref<java::lang::String> url) { return call_static_method<"getFileExtensionFromUrl", jni::ref<java::lang::String>>(url); }
	jboolean hasMimeType(jni::ref<java::lang::String> mimeType) { return call_method<"hasMimeType", jboolean>(mimeType); }
	jni::ref<java::lang::String> getMimeTypeFromExtension(jni::ref<java::lang::String> extension) { return call_method<"getMimeTypeFromExtension", jni::ref<java::lang::String>>(extension); }
	jboolean hasExtension(jni::ref<java::lang::String> extension) { return call_method<"hasExtension", jboolean>(extension); }
	jni::ref<java::lang::String> getExtensionFromMimeType(jni::ref<java::lang::String> mimeType) { return call_method<"getExtensionFromMimeType", jni::ref<java::lang::String>>(mimeType); }
	static jni::ref<android::webkit::MimeTypeMap> getSingleton() { return call_static_method<"getSingleton", jni::ref<android::webkit::MimeTypeMap>>(); }

protected:

	MimeTypeMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_MIMETYPEMAP