// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_DLSINFO_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_DLSINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class DLSInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::DLSInfo>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/DLSInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_DLSINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_DLSINFO)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_DLSINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::DLSInfo : public jni::object_base<"com/sun/media/sound/DLSInfo",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> name() { return get_field<"name", jni::ref<java::lang::String>>(); }
	void name(jni::ref<java::lang::String> v) { set_field<"name", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> creationDate() { return get_field<"creationDate", jni::ref<java::lang::String>>(); }
	void creationDate(jni::ref<java::lang::String> v) { set_field<"creationDate", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> engineers() { return get_field<"engineers", jni::ref<java::lang::String>>(); }
	void engineers(jni::ref<java::lang::String> v) { set_field<"engineers", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> product() { return get_field<"product", jni::ref<java::lang::String>>(); }
	void product(jni::ref<java::lang::String> v) { set_field<"product", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> copyright() { return get_field<"copyright", jni::ref<java::lang::String>>(); }
	void copyright(jni::ref<java::lang::String> v) { set_field<"copyright", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> comments() { return get_field<"comments", jni::ref<java::lang::String>>(); }
	void comments(jni::ref<java::lang::String> v) { set_field<"comments", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> tools() { return get_field<"tools", jni::ref<java::lang::String>>(); }
	void tools(jni::ref<java::lang::String> v) { set_field<"tools", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> archival_location() { return get_field<"archival_location", jni::ref<java::lang::String>>(); }
	void archival_location(jni::ref<java::lang::String> v) { set_field<"archival_location", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> artist() { return get_field<"artist", jni::ref<java::lang::String>>(); }
	void artist(jni::ref<java::lang::String> v) { set_field<"artist", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> commissioned() { return get_field<"commissioned", jni::ref<java::lang::String>>(); }
	void commissioned(jni::ref<java::lang::String> v) { set_field<"commissioned", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> genre() { return get_field<"genre", jni::ref<java::lang::String>>(); }
	void genre(jni::ref<java::lang::String> v) { set_field<"genre", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> keywords() { return get_field<"keywords", jni::ref<java::lang::String>>(); }
	void keywords(jni::ref<java::lang::String> v) { set_field<"keywords", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> medium() { return get_field<"medium", jni::ref<java::lang::String>>(); }
	void medium(jni::ref<java::lang::String> v) { set_field<"medium", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> subject() { return get_field<"subject", jni::ref<java::lang::String>>(); }
	void subject(jni::ref<java::lang::String> v) { set_field<"subject", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> source() { return get_field<"source", jni::ref<java::lang::String>>(); }
	void source(jni::ref<java::lang::String> v) { set_field<"source", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> source_form() { return get_field<"source_form", jni::ref<java::lang::String>>(); }
	void source_form(jni::ref<java::lang::String> v) { set_field<"source_form", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> technician() { return get_field<"technician", jni::ref<java::lang::String>>(); }
	void technician(jni::ref<java::lang::String> v) { set_field<"technician", jni::ref<java::lang::String>>(v); }

	static jni::ref<com::sun::media::sound::DLSInfo> new_object() { return base_::new_object(); }

protected:

	DLSInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_DLSINFO