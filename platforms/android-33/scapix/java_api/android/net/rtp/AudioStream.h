// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/net/rtp/RtpStream.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_RTP_AUDIOSTREAM_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_RTP_AUDIOSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::rtp { class AudioStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::rtp::AudioStream>
{
	static constexpr fixed_string class_name = "android/net/rtp/AudioStream";
	using base_classes = std::tuple<scapix::java_api::android::net::rtp::RtpStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_RTP_AUDIOSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_RTP_AUDIOSTREAM)
#define SCAPIX_JAVA_API_ANDROID_NET_RTP_AUDIOSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/rtp/AudioCodec.h>
#include <scapix/java_api/android/net/rtp/AudioGroup.h>
#include <scapix/java_api/java/net/InetAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::rtp::AudioStream : public jni::object_base<"android/net/rtp/AudioStream",
	android::net::rtp::RtpStream>
{
public:

	static jni::ref<android::net::rtp::AudioStream> new_object(jni::ref<java::net::InetAddress> address) { return base_::new_object(address); }
	jboolean isBusy() { return call_method<"isBusy", jboolean>(); }
	jni::ref<android::net::rtp::AudioGroup> getGroup() { return call_method<"getGroup", jni::ref<android::net::rtp::AudioGroup>>(); }
	void join(jni::ref<android::net::rtp::AudioGroup> group) { return call_method<"join", void>(group); }
	jni::ref<android::net::rtp::AudioCodec> getCodec() { return call_method<"getCodec", jni::ref<android::net::rtp::AudioCodec>>(); }
	void setCodec(jni::ref<android::net::rtp::AudioCodec> codec) { return call_method<"setCodec", void>(codec); }
	jint getDtmfType() { return call_method<"getDtmfType", jint>(); }
	void setDtmfType(jint type) { return call_method<"setDtmfType", void>(type); }

protected:

	AudioStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_RTP_AUDIOSTREAM
