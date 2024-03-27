// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDER_PIPEDATAWRITER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDER_PIPEDATAWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class ContentProvider_PipeDataWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::ContentProvider_PipeDataWriter>
{
	static constexpr fixed_string class_name = "android/content/ContentProvider$PipeDataWriter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDER_PIPEDATAWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDER_PIPEDATAWRITER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDER_PIPEDATAWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::ContentProvider_PipeDataWriter : public jni::object_base<"android/content/ContentProvider$PipeDataWriter",
	java::lang::Object>
{
public:

	void writeDataToPipe(jni::ref<android::os::ParcelFileDescriptor> p1, jni::ref<android::net::Uri> p2, jni::ref<java::lang::String> p3, jni::ref<android::os::Bundle> p4, jni::ref<java::lang::Object> p5) { return call_method<"writeDataToPipe", void>(p1, p2, p3, p4, p5); }

protected:

	ContentProvider_PipeDataWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CONTENTPROVIDER_PIPEDATAWRITER
