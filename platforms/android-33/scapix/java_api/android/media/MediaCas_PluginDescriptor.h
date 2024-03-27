// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACAS_PLUGINDESCRIPTOR_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACAS_PLUGINDESCRIPTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCas_PluginDescriptor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCas_PluginDescriptor>
{
	static constexpr fixed_string class_name = "android/media/MediaCas$PluginDescriptor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACAS_PLUGINDESCRIPTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACAS_PLUGINDESCRIPTOR)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACAS_PLUGINDESCRIPTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCas_PluginDescriptor : public jni::object_base<"android/media/MediaCas$PluginDescriptor",
	java::lang::Object>
{
public:

	jint getSystemId() { return call_method<"getSystemId", jint>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MediaCas_PluginDescriptor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACAS_PLUGINDESCRIPTOR