// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/midi/ShortMessage.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FASTSHORTMESSAGE_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FASTSHORTMESSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class FastShortMessage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::FastShortMessage>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/FastShortMessage";
	using base_classes = std::tuple<scapix::java_api::javax::sound::midi::ShortMessage>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FASTSHORTMESSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FASTSHORTMESSAGE)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FASTSHORTMESSAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::FastShortMessage : public jni::object_base<"com/sun/media/sound/FastShortMessage",
	javax::sound::midi::ShortMessage>
{
public:

	jni::ref<jni::array<jbyte>> getMessage() { return call_method<"getMessage", jni::ref<jni::array<jbyte>>>(); }
	jint getLength() { return call_method<"getLength", jint>(); }
	void setMessage(jint p1) { return call_method<"setMessage", void>(p1); }
	void setMessage(jint p1, jint p2, jint p3) { return call_method<"setMessage", void>(p1, p2, p3); }
	void setMessage(jint p1, jint p2, jint p3, jint p4) { return call_method<"setMessage", void>(p1, p2, p3, p4); }
	jint getChannel() { return call_method<"getChannel", jint>(); }
	jint getCommand() { return call_method<"getCommand", jint>(); }
	jint getData1() { return call_method<"getData1", jint>(); }
	jint getData2() { return call_method<"getData2", jint>(); }
	jint getStatus() { return call_method<"getStatus", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	FastShortMessage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FASTSHORTMESSAGE