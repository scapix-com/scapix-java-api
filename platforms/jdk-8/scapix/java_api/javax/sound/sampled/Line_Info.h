// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_LINE_INFO_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_LINE_INFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::sampled { class Line_Info; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::sampled::Line_Info>
{
	static constexpr fixed_string class_name = "javax/sound/sampled/Line$Info";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_LINE_INFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_LINE_INFO)
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_LINE_INFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::sampled::Line_Info : public jni::object_base<"javax/sound/sampled/Line$Info",
	java::lang::Object>
{
public:

	static jni::ref<javax::sound::sampled::Line_Info> new_object(jni::ref<java::lang::Class> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::Class> getLineClass() { return call_method<"getLineClass", jni::ref<java::lang::Class>>(); }
	jboolean matches(jni::ref<javax::sound::sampled::Line_Info> p1) { return call_method<"matches", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Line_Info(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_LINE_INFO
