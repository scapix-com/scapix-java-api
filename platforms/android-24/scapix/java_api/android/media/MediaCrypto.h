// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACRYPTO_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACRYPTO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCrypto; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCrypto>
{
	static constexpr fixed_string class_name = "android/media/MediaCrypto";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACRYPTO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACRYPTO)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACRYPTO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/UUID.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCrypto : public jni::object_base<"android/media/MediaCrypto",
	java::lang::Object>
{
public:

	static jni::ref<android::media::MediaCrypto> new_object(jni::ref<java::util::UUID> uuid, jni::ref<jni::array<jbyte>> initData) { return base_::new_object(uuid, initData); }
	static jboolean isCryptoSchemeSupported(jni::ref<java::util::UUID> uuid) { return call_static_method<"isCryptoSchemeSupported", jboolean>(uuid); }
	jboolean requiresSecureDecoderComponent(jni::ref<java::lang::String> p1) { return call_method<"requiresSecureDecoderComponent", jboolean>(p1); }
	void setMediaDrmSession(jni::ref<jni::array<jbyte>> p1) { return call_method<"setMediaDrmSession", void>(p1); }
	void release() { return call_method<"release", void>(); }

protected:

	MediaCrypto(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACRYPTO
